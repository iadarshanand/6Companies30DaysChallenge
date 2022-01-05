#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	#define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(ull n) 
	{
	    // code here int
	    vector<ull>dp(n+1);
	    dp[0]=0;
	    dp[1]=1;
	    ull p2=1,p3=1,p5=1;
	    for(ull i=2;i<=n;i++)
	    {
	        ull a1=2*dp[p2];
	        ull b1=3*dp[p3];
	        ull c1=5*dp[p5];
	        
	        dp[i]=min({a1,b1,c1});
	        if(dp[i]==a1)
	        p2++;
	        if(dp[i]==b1)
	        p3++;
	        if(dp[i]==c1)
	        p5++;
	    }
	    return dp[n];
	}
};