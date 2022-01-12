#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    
    void f(int*a,vector<string>&v,set<string>&ans,string word,int n,int i)
    {
        //Base Case
        if(i>=n)
        {
            ans.insert(word);
            return;
        }
        
        //Recursive Case
        string temp=v[a[i]];
        for(int idx=0;idx<temp.size();idx++)
        {
           f(a,v,ans,word+temp[idx],n,i+1); 
        }
        
    }
    
    vector<string> possibleWords(int a[], int n)
    {
        //Your code here
        vector<string>v(10);
        v[0]="";
        v[1]="";
        v[2]="abc";
        v[3]="def";
        v[4]="ghi";
        v[5]="jkl";
        v[6]="mno";
        v[7]="pqrs";
        v[8]="tuv";
        v[9]="wxyz";
        
        set<string>ans;
        f(a,v,ans,"",n,0);
        
        vector<string>res;
        for(auto x:ans)
        res.push_back(x);
        
        return res;
    }
};