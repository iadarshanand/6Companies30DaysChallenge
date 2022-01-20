#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int lengthOfLongestAP(int a[], int n) {
        // code here
        if(n<=2)
        return n;
        int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int d=a[j]-a[i];
            int k=j+1;
            int prev=a[j];
            int cnt=2;
            while(k<n)
            {
                if(a[k]-prev<d)
                {
                    k++;
                }
                else if(a[k]-prev>d)
                {
                    break;
                }
                else
                {
                    prev=a[k];
                    cnt++;
                    k++;
                }
            }
            ans=max(ans,cnt);
        }
    }
    return ans;
    }
};