#include<bits/stdc++.h>
using namespace std;

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
	// Your code here
	vector<string>ans;
	for(int i=1;i<=n;i++)
	{
	    int no=i;
	    string temp="";
	    while(no>0)
	    {
	        int c=(no&1);
	        string c1=to_string(c);
	        
	        temp+=c1;
	        no>>=1;
	    }
	    reverse(temp.begin(),temp.end());
	    ans.push_back(temp);
	}
	return ans;
}
