#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    set<int>st;
		    int n=s.size();
		    vector<int>mp(27,-1);
		  //  map<int,char>mp1;
		  //  vector<int>visited(27,false);
		    string ans="";
		    for(int i=0;i<n;i++)
		    {
		        char c=s[i];
		        if(mp[c-'a']==-1)
		        {
		            mp[c-'a']=i;
		            st.insert(i);
		        }
		        else
		        {
		            auto it=st.find(mp[c-'a']);
		            if(it!=st.end())
		            st.erase(it);
		        }
		        if(st.empty())
		        {
		            ans+='#';
		        }
		        else
		        {
		            ans+=(s[*st.begin()]);
		        }
		    }
		    return ans;
		    
		}

};