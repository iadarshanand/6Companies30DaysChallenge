#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) 
    {
        int n=a.size();
        int m=a[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        q.push({-1,-1});
        int cnt=0;
        
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            if(temp.first==-1 && temp.second==-1)
            {
                cnt++;
                if(q.size()>0)
                {
                    q.push({-1,-1});
                }
                continue;
            }
            
            int i=temp.first;
            int j=temp.second;
            
            if(i+1<n && a[i+1][j]==1)
            {
                q.push({i+1,j});
                a[i+1][j]=2;
            }
            if(i-1>=0 && a[i-1][j]==1)
            {
                q.push({i-1,j});
                a[i-1][j]=2;
            }
            if(j+1<m && a[i][j+1]==1)
            {
                q.push({i,j+1});
                a[i][j+1]=2;
            }
            if(j-1>=0 && a[i][j-1]==1)
            {
                q.push({i,j-1});
                a[i][j-1]=2;
            }
              
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                    return -1;
            }
        }
        return cnt-1;
        
    }
};