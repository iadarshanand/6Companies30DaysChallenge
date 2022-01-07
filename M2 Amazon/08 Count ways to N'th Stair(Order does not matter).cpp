#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    int dp[1000004];
    
    int f(int n, int dp[])
    {
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        
        if(dp[n]!=-1)
        return dp[n];
        
        int op1=f(n-1,dp);
        int op2=f(n-2,dp);
        return dp[n]=(op1+op2)/2 +1;
    }
    long long countWays(int n)
    {
        // your code here
        memset(dp, -1, sizeof(dp));
        
        return f(n,dp);
        
    }
};