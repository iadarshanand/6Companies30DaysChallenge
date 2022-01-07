#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  int f(int i, int n, int k,int a[],vector<vector<int>>&dp)
  {
      //Base Case
      if(i>=n)
      return 0;
      if(k==0)
      return 0;
      
      //Memoized Case
      if(dp[i][k]!=-1)
      return dp[i][k];
      
      //Recursive Case
      int op1=0;
      for(int j=i+1;j<n;j++)
      {
          if(a[j]>a[i])
          {
              op1=max(op1,(a[j]-a[i]+f(j+1,n,k-1,a,dp)));
          }
      }
      int op2=f(i+1,n,k,a,dp);
      return dp[i][k] = max(op1,op2);
      
      
  }
  
    int maxProfit(int k, int n, int a[]) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        int maxi=0;
        
        int op1=f(0,n,k,a,dp);
        int op2=f(1,n,k,a,dp);
        return max(op1,op2);
    }
};