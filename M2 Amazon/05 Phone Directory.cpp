#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contacts[], string s)
    {
        // code here
        int n1=s.size();
        set<string>st;
        for(int i=0;i<n;i++)
        st.insert(contacts[i]);
        vector<vector<string>>a;
        for(int i=0;i<n1;i++)
        {
            char c=s[i];
            for(auto it=st.begin();it!=st.end();it++)
            {
                string temp=*it;
                if(i>=temp.size() || temp[i]!=s[i])
                {
                    st.erase(it);
                    // it--;
                }
            }
            vector<string>v;
            if(st.empty())
            v.push_back("0");
            else
            {
            for(auto x:st)
            v.push_back(x);
            }
            a.push_back(v);
        }
        return a;
    }
    
};