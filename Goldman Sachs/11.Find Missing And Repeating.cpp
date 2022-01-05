
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *a, int n) 
    {
        // code here
        vector<int>dp(n+1,0);
        for(int i=0;i<n;i++)
        {
            dp[a[i]]++;
        }
        int *ans=new int(2);
        // int idx=0;
        int missing,repeat;
        for(int i=1;i<=n;i++)
        {
            if(dp[i]==0)
            {
                missing=i;
                // idx++;
            }
            if(dp[i]==2)
            {
                repeat=i;
                // idx++;
            }
            
        }
        ans[1]=missing;
        ans[0]=repeat;
        return ans;
        
    }
};