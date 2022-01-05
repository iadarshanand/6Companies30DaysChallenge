#include<bits/stdc++.h>
using namespace std;

string encode(string s)
{     
  //Your code here 
  int n=s.size();
  string ans="";
  ans+=s[0];
  int cnt=1;
  for(int i=1;i<n;i++)
  {
      if(s[i]==s[i-1])
      {
          cnt++;
      }
      else
      {
          string temp=to_string(cnt);
          ans+=temp;
          cnt=1;
          ans+=s[i];
      }
  }
  string temp=to_string(cnt);
  ans+=temp;
  return ans;
} 