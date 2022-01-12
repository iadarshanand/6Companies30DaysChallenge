#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    void f(vector<vector<int>>& a,int m, int n, int i1, int j1, int no)
    {
        queue<pair<int,int>>q;
        q.push({i1,j1});
        while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            
            // a[i][j]=no;
            
            if(i+1<n && a[i+1][j]==1)
            {
                a[i+1][j]=no;
                q.push({i+1,j});
            }
            if(i-1>=0 && a[i-1][j]==1)
            {
                a[i-1][j]=no;
                q.push({i-1,j});
            }
            if(j+1<m && a[i][j+1]==1)
            {
                a[i][j+1]=no;
                q.push({i,j+1});
            }
            if(j-1>=0 && a[i][j-1]==1)
            {
                a[i][j-1]=no;
                q.push({i,j-1});
            }
            
            //diagonally
            if(i-1>=0 && j-1>=0 && a[i-1][j-1]==1)
            {
                a[i-1][j-1]=no;
                q.push({i-1,j-1});
            }
            if(i-1>=0 && j+1<m && a[i-1][j+1]==1)
            {
                a[i-1][j+1]=no;
                q.push({i-1,j+1});
            }
            if(i+1<n && j+1<m && a[i+1][j+1]==1)
            {
                a[i+1][j+1]=no;
                q.push({i+1,j+1});
            }
            if(i+1<n && j-1>=0 && a[i+1][j-1]==1)
            {
                a[i+1][j-1]=no;
                q.push({i+1,j-1});
            }
        }
    }
    
    int findMaxArea(vector<vector<int>>& a) {
        // Code here
        int n=a.size(),m=a[0].size();
        int no=2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    a[i][j]=no;
                    f(a,m,n,i,j,no);
                    no++;
                }
            }
        }
        // return 0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }        
        
        
        vector<int>ans(no+1,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[a[i][j]]++;
            }
        }
        int maxi=0;
        for(int i=2;i<=no;i++)
        {
            maxi=max(maxi,ans[i]);
        }
        return maxi;
    }
};