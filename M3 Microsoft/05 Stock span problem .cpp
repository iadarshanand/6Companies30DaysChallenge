#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int a[], int n)
    {
       // Your code here
       stack<pair<int,int>>st;
       st.push({INT_MAX,-1});
       vector<int>ans(n);
       for(int i=0;i<n;i++)
       {
           int val=a[i];
           while(a[i]>=st.top().first)
           {
               st.pop();
           }
          ans[i]=i-st.top().second;
           st.push({a[i],i});
       }
       return ans;
    }
};
