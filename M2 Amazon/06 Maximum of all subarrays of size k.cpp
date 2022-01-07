#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *a, int n, int k)
    {
        // your code here
        multiset<int>ms;
        for(int i=0;i<k;i++)
        {
            ms.insert(a[i]);
        }
        vector<int>ans;
        ans.push_back(*ms.rbegin());
        
        for(int i=k;i<n;i++)
        {
            auto it=ms.find(a[i-k]);
            ms.erase(it);
            ms.insert(a[i]);
            ans.push_back(*ms.rbegin());
        }
        return ans;        
    }
};