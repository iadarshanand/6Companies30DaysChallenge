#include<bits/stdc++.h>
using namespace std;


#define ll long long
class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string temp="";
        while(n>0)
        {
            int val=n%26;
            char c=val==0?(val+'Z'):(val-1+'A');
            temp+=c;
            n=(n-1)/26;
        }
        // cout<<temp<<endl;
        // return "";
        reverse(temp.begin(),temp.end());
        return temp;
        
    }
};