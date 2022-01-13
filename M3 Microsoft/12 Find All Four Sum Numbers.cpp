#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        set<vector<int>>st;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int sum=a[i]+a[j];
                int j1=j+1,k1=n-1;
                while(j1<k1)
                {
                    if(sum+a[j1]+a[k1]==k)
                    {
                        vector<int>v;
                        v.push_back(a[i]);
                        v.push_back(a[j]);
                        v.push_back(a[j1]);
                        v.push_back(a[k1]);
                        st.insert(v);
                        j1++;
                        k1--;
                    }
                    else if(sum+a[j1]+a[k1]<k)
                    {
                        j1++;
                    }
                    else if(sum+a[j1]+a[k1]>k)
                    {
                        k1--;
                    }
                }
            }
        }
        for(auto x:st)
        ans.push_back(x);
        return ans;
        
    }
};