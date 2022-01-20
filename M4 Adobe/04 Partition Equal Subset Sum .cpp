#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    int f(vector<vector<int>>&dp,int a[],int sum, int n, int i)
    {
        //Base Case
        if(sum==0)
        return 1;
        if(sum<0 || i>=n)
        return 0;
        
        //Memoized Case
        if(dp[i][sum]!=-1)
        return dp[i][sum];
        
        //Recursive Case
        int op1=f(dp,a,sum-a[i],n,i+1);
        int op2=f(dp,a,sum,n,i+1);
        return dp[i][sum]=op1|op2;
    }

    int equalPartition(int n, int a[])
    {
        // code here
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        if(sum%2)
        return 0;
        sum/=2;
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        int op1=f(dp,a,sum-a[0],n,1);
        int op2=f(dp,a,sum,n,1);

        return op1|op2;

    }
};