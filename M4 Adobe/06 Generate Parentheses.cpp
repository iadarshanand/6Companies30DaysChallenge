#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void f(int n,int cnt, string s,int ob,int cb,vector<string>&ans)
    {
        //Base Case
        if(cnt==2*n)
        {
            ans.push_back(s);
            return;
        }
        
        //Rcursive Case
        if(ob<n)
        {
            f(n,cnt+1,s+"(",ob+1,cb,ans);
        }
        if(cb<ob)
        {
            f(n,cnt+1,s+")",ob,cb+1,ans);
        }
        return;
    }
    
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>ans;
        f(n,0,"",0,0,ans);
        return ans;
    }
};