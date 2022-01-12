#include<bits/stdc++.h>
using namespace std;

class Solution{
    
    int f(int a[], int i, int n, int k,vector<vector<int>>&dp)
    {
        //Base Case
        if(k<0)
        return INT_MAX;
        if(k==0)
        return 0;
        if(i>=n)
        return k;
        
        //Memoized Case
        if(dp[i][k]!=-1)
        return dp[i][k];
        
        //Rescursive Case
        int op1=f(a,i+1,n,k-a[i],dp);
        int op2=f(a,i+1,n,k,dp);
        
        return dp[i][k]=min(op1,op2);
    }

  public:
	int minDifference(int a[], int n)  { 
	    // Your code goes here
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        
        int k=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        int ans=f(a,0,n,k,dp);
        
        int s1=k-ans;
        int s2=sum-s1;
        return abs(s2-s1);
	} 
};