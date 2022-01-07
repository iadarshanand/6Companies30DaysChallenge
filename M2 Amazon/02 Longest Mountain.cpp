
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& a) {
        int n=a.size();
        vector<int>left(n);
        vector<int>right(n);
        left[0]=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                left[i]=left[i-1]+1;
            }
            else
            {
                left[i]=0;
            }
        }
        right[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>a[i+1])
            {
                right[i]=right[i+1]+1;
            }
            else
            {
                right[i]=0;
            }
        }
        // for(int i=0;i<n;i++)
        //     cout<<left[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)
        //     cout<<right[i]<<" ";
        // cout<<endl;        
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(left[i]!=0 && right[i]!=0)
            {
                ans=max(ans,right[i]+left[i]+1);
            }
        }
        return ans;
        
    }
};