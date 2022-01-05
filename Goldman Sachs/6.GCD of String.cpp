#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string s1, string s2) 
    {

        while(true)
        {
            if(s1.length()<s2.length())
            {
                swap(s1,s2);
            }    
            
            if(s1.substr(0,s2.length())!=s2)
                return "";
            if(s1==s2)
                return s1;
            s1=s1.substr(s2.length(),s1.length()-s2.length());
            cout<<s1<<endl;
        }
        return "";
        
    }
};