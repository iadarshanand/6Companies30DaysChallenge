#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string decodedString(string s)
    {
        // code here
        stack<string>st;
        int n=s.size();
        string ans="";
        // string temp="";
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int num=0;
                while(s[i]>='0' && s[i]<='9')
                {
                    int digit=s[i]-'0';
                    num=num*10 + digit;
                    i++;
                }
                i--;
                st.push(to_string(num));
            }
            else if(s[i]=='[')
            {
                st.push("[");
            }
            else if(s[i]==']')
            {
                string temp="";
                while(st.top()!="[")
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                // cout<<temp<<endl;
                string temp1=temp;
                int val=stoi(st.top());
                st.pop();
                for(int i1=1;i1<val;i1++)
                {
                    temp+=temp1;
                }
                st.push(temp);
                
                // if(st.empty())
                // {
                //     ans+=temp;
                //     temp="";
                // }
            }
            else
            {
                string str="";
                while(s[i]>='a' && s[i]<='z')
                {
                    str+=s[i];
                    i++;
                }
                i--;
                st.push(str);
            }
            
        }
        return st.top();
    }
};