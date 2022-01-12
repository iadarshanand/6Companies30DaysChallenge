#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int> >& a)
{
    // Your code goes here
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    
    for(int j=0;j<m;j++)
    {
        int i1=0,j1=n-1;
        while(i1<j1)
        {
            swap(a[i1][j],a[j1][j]);
            i1++;
            j1--;
        }
    }
}