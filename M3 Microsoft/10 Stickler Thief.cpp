#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int maxi=0;
    
    int FindMaxSum(int a[], int n)
    {
        // Your code here
        vector<int>dp(n);
        dp[0]=a[0];
        dp[1]=max(a[1],a[0]);
        
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-2]+a[i],dp[i-1]);
        }
        return dp[n-1];
        
    }
};