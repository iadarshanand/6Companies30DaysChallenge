#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& a) 
    {
        //code here
        map<string,vector<string>>mp;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            string temp=a[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(a[i]);
        }
        // change
        vector<vector<string>>dp;
        for(auto x:mp)
        {
            vector<string>temp;
            for(auto nbr:x.second)
            {
                temp.push_back(nbr);
            }
            dp.push_back(temp);
        }
        return dp;
    }
};