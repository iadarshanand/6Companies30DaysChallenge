#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    string nextPalin(string s) { 
        //complete the function here
        int n=s.size();
        int mid=n/2;
        
        string temp="";
        bool flag=true;
        int i=mid-1;
        stack<int>st;
        st.push(i);
        int mini;
        i--;
        while(i>=0)
        {
            
            
            if(s[i]>=s[st.top()])
            {
                st.push(i);
            }
            else
            {
                flag=false;
                // string temp1="";
                temp=s.substr(0,i);
                string temp1="";
                while(!st.empty() && s[i]<s[st.top()])
                {
                    mini=st.top();
                    st.pop();
                    if(!st.empty() && s[i]<s[st.top()])
                    {
                        temp1+=s[mini];
                    }
                }
                // swap(s[i],s[temp.size]);
                temp+=(s[mini]);
                // temp+=s[i];
                temp1+=s[i];
                while(!st.empty())
                {
                    temp1+=s[st.top()];
                    st.pop();
                }
                reverse(temp1.begin(),temp1.end());
                temp+=temp1;
                break;
            }
            i--;
        }
        if(flag)
        return "-1";
        
        // temp=s.substr(0,mid);
        string rev=temp;
        reverse(rev.begin(),rev.end());
        
        if(n%2)
        {
            temp=temp+s[mid]+rev;
        }
        else
        {
            temp+=rev;
        }
        return temp;
    }
};