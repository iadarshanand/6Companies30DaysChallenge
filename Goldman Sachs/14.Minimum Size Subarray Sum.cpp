#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int k, vector<int>& a) 
    {
        int n=a.size();
        int i=0,j=1;
        int sum=a[0];
        if(a[0]==k)
            return 1;
        int ans=INT_MAX;
        while(j<n)
        {
            while(j<n && sum<k)
            {
                sum+=a[j];
                j++;
            }
            while( sum>=k)
            {
                ans=min(ans,(j-i));
                sum-=a[i];
                i++;
            }
        }
        // while(i<j && sum>=k)
        // {
        //     ans=min(ans,(j-i));
        //     sum-=a[i];
        //     i++;
        // }
        if(ans==INT_MAX)
            return 0;
        return ans;
        
    }
};