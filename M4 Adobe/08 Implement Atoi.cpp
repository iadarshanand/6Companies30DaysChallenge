
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int n=s.size();
        
        //Base Case
        if(n==1 && s[0]=='-')
        return 0;
        if(n>2 && !(s[1]>='0' && s[1]<='9'))
        return -1;
        if(n>2 && s[0]!='-' && !(s[0]>='0' && s[0]<='9'))
        return -1;
        if((s[1]<'0' && s[1]>'9'))
        return -1;
        
        
        
        int val,i=1;
        if(s[0]!='-')
        val=s[0]-'0';
        else 
        {
            val=s[1]-'0';
            i=2;
        }
        
        for(;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
            val*=10;
            val+=(s[i]-'0');
            }
            else
            {
                return -1;
            }
        }
        if(s[0]=='-')
        val=0-val;
        return val;
    }
};