#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    #define mod 1000000007
    #define ll  int
    
    ll f(vector<vector<ll>>&dp,vector<int>&a,int sum,int i,int n)
    {
        //Base Case
        if(sum==0)
        return 1;
        if(i>=n || sum<0)
        return 0;
        
        //Memoized Case
        if(dp[i][sum]!=-1)
        return dp[i][sum]%mod;
        
        //Recursive Case
        ll op1=f(dp,a,sum-a[i],i+1,n);
        ll op2=f(dp,a,sum,i+1,n);
        
        return dp[i][sum]=(op1%mod+op2%mod)%mod;

    }
    
    ll numOfWays(int sum, int x)
    {
        // code here
        int i=1;
        vector<int>v;
        while(pow(i,x)<=sum)
        {
            v.push_back(pow(i,x));
            i++;
        }
        int n=v.size();
        vector<vector<ll>>dp(n,vector<ll>(sum+1,-1));
        
        ll op1=f(dp,v,sum-v[0],1,n);
        ll op2=f(dp,v,sum,1,n);
        
        return (op1%mod+op2%mod)%mod;
    }
};