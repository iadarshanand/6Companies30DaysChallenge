#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    map<char,int>mp;
	   // int n=nuts.size();
	    for(int i=0;i<n;i++)
	    {
	        mp[nuts[i]]++;
	    }
	    
	    int idx=0;
	    while(mp['!']>0)
	    {
	        nuts[idx]='!';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['!']--;
	    }
	    while(mp['#']>0)
	    {
	        nuts[idx]='#';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['#']--;
	    }
	    while(mp['$']>0)
	    {
	        nuts[idx]='$';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['$']--;
	    }
	    while(mp['%']>0)
	    {
	        nuts[idx]='%';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['%']--;
	    }
	    while(mp['&']>0)
	    {
	        nuts[idx]='&';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['&']--;
	    }
	    while(mp['*']>0)
	    {
	        nuts[idx]='*';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['*']--;
	    }
	    while(mp['@']>0)
	    {
	        nuts[idx]='@';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['@']--;
	    }
	    while(mp['^']>0)
	    {
	        nuts[idx]='^';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['^']--;
	    }
	    while(mp['~']>0)
	    {
	        nuts[idx]='~';
	        bolts[idx]=nuts[idx];
	        idx++;
	        mp['~']--;
	    }	    
	}

};