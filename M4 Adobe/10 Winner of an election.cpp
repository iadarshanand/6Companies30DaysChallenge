
#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string a[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]+=1;
        }
        int maxi=0;
        string leader="";
        for(auto x:mp)
        {
            if(x.second>maxi)
            {
                maxi=x.second;
                leader=x.first;
            }
        }
        vector<string>v;
        v.push_back(leader);
        v.push_back(to_string(maxi));
        return v;
    }
};