#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    bool bfs(int node, vector<bool>&visited,vector<int> mp[],int d)
    {
        // visited[node]=true;

        queue<int>q;
        q.push(node);
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            
            
            visited[temp]=true;
            for(auto x:mp[temp])
            {
                if(x==d)
                return false;
                if(!visited[x])
                {
                    q.push(x);
                }
            }
            
        }
        return true;
    }
    int isBridge(int n, vector<int> mp[], int c, int d) 
    {
        // Code here
        // for(int i=0;i<n;i++)
        // {
        //     for(auto nbr:mp[i])
        //     cout<<nbr<<" ";
        //     cout<<endl;
        // }
        
        vector<bool>visited(n,false);
        visited[c]=true;
        for(auto x:mp[c])
        {
            if(x!=d && !visited[x])
            {
                visited[x]=true;
                bool check=bfs(x,visited,mp,d);
                if(!check)
                return 0;
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     if(visited[i]==false)
        //     return 1;
        // }
        return 1;
    }
};