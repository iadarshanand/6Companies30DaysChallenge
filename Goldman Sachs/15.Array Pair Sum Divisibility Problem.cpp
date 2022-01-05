#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> a, int k) 
    {
        // Code here.
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            a[i]%=k;
        }
        sort(a.begin(),a.end());
        int cnt=0;
        int i=0;
        while(i<n && a[i]==0)
        {
            i++;
            cnt++;
        }
        if(cnt%2)
        return false;
        
        int j=n-1;
        while(i<j)
        {
            if(a[i]+a[j]!=k)
            return false;
            i++;
            j--;
        }
        if(i==j)
        return false;
        return true;
        
    }
};