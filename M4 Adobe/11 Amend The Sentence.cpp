#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        int n=s.size();
        string temp="";
        temp+=tolower(s[0]);
        int i=1;
        while(i<n)
        {
           if(s[i]<97)
           {
               temp+=" ";
               temp+=tolower(s[i]);
           }
           else
           temp+=s[i];
           i++;
        }
        return temp;
    }
};