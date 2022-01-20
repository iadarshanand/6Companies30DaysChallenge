#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int f(vector<int>&a,int start,int end,vector<vector<int>>&dp)
    {
        //Base Case
        if(start>end)
            return dp[start][end]=0;
        if(start==end)
            return dp[start][end]=a[start];
            
        //Memoized Case    
        if(dp[start][end]!=-1)
            return dp[start][end];
        
        //Recursive Case
        int op1=a[start]+min(f(a,start+1,end-1,dp),f(a,start+2,end,dp));
        int op2=a[end]+min(f(a,start+1,end-1,dp),f(a,start,end-2,dp));
        return dp[start][end]=max(op1,op2);
    }
    int maxCoins(vector<int>a,int n)
    {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(a,0,n-1,dp);
    }
};