#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    string printMinNumberForPattern(string s)
    {
        // code here 
        int n=s.size();
        int val=1;
        stack<int>st;
        string ans="";
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='D')
            {
                st.push(val);
                val++;
            }
            else
            {
                st.push(val);
                val++;
                while(!st.empty())
                {
                    ans+=st.top()+'0';
                    st.pop();
                }
            }
        }
        st.push(val);
        while(!st.empty())
        {
            ans+=(st.top()+'0');
            st.pop();
        }
        return ans;
    }
        
};