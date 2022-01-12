#include<bits/stdc++.h>
using namespace std;

class Solution {
public:


    bool f( map<int,vector<int> >&m,int i,vector<bool>&visited,vector<bool>&stack)
    {
        for(auto x:m[i])
        {
            if(!visited[x])
            {
                visited[x]=true;
                stack[x]=true;
                bool ans=f(m,x,visited,stack);
                if(ans==false)
                return false;
            }
            else if(visited[x] && stack[x])
            return false;
        }
        stack[i]=false;
        return true;
    }

	bool isPossible(int n, vector<pair<int, int> >& a) 
	{
	    // Code here
	    vector<bool>visited(n,false);
	    vector<bool>stack(n,false);
	    
	    map<int,vector<int> >m;
	    for(int i=0;i<a.size();i++)
	    {
	        m[a[i].first].push_back(a[i].second);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(!visited[i])
	        {
	            visited[i]=true;
	            stack[i]=true;
	            bool ans=f(m,i,visited,stack);
	            if(ans==false)
	            return false;
	        }
	    }
	    return true;
	    
	}
};