#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
class Solution {
	public:
	
	int f(string s,int i, int n, int val,vector<int>&dp)
	{
	    if(s[i]=='0')
	    return 0;
	    if(val>26)
	    return 0;
	    if(i==n-1 || i==n)
	    return 1;
	    
	    if(dp[i]!=-1)
	    return dp[i];
	    
	     val=s[i]-'0';
	    int op1=f(s,i+1,n,val,dp);
	    if(i+1<n)
	    {
	        val=((s[i]-'0')*10 + (s[i+1]-'0'));
	        op1=(op1%mod)+(f(s,i+2,n,val,dp)%mod)%mod;
	    }
	    return dp[i]=op1%mod;
	}
	
		int CountWays(string s)
		{
		    if(s[0]=='0')
		    return 0;
		    int n=s.size();
		    // Code here
		    int val=s[0]-'0';
		    vector<int>dp(n+1,-1);
		    
		    int op1=f(s,1,n,val,dp);
		    if(1<n)
		    {
		        val=((s[0]-'0')*10 + (s[1]-'0'));
		        op1=((op1%mod)+(f(s,2,n,val,dp)%mod))%mod;
		    }
		    return op1;
		    
		}

};