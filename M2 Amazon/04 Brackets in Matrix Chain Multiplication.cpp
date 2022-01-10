#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    pair<string,int> f(int *a, string s, int i, int j, vector<vector<pair<string,int>>> &dp)
    {
       //Base Case 
        if( i == j){
            dp[i][j] = {s.substr(i,1),0};
            return dp[i][j];
            
        }
        
        //Memoized case
        if(dp[i][j].second != -1) 
        return dp[i][j];
        
        //Recursive Case
        int product = INT_MAX;
        string q = "";
        for(int k=i;k<j;k++)
        {
            pair<string,int> x = f(a,s,i,k,dp);
            pair<string,int> y = f(a,s,k+1,j,dp);
            string r = "";
            r.push_back('(');
            r += x.first + y.first;
            r.push_back(')');
            if(x.second+y.second + a[i]*a[k+1]*a[j+1] < product)
            {
                product = x.second+y.second + a[i]*a[k+1]*a[j+1];
                q = r;
            }
        }
        return dp[i][j] = {q,product};
        
    }
    string matrixChainOrder(int a[], int n)
    {
        // code here
        string s = "",r="";
        for(int i=0;i<n-1;i++)
        {
            s.push_back(char('A' + i));
        }
        vector<vector<pair<string,int>>> dp(n-1,vector<pair<string,int>>(n-1,{r,-1}));
        
        pair<string,int> ans = f(a,s,0,s.length()-1,dp);
        // cout<<ans.second<<endl;
        return ans.first;
        
    }
};