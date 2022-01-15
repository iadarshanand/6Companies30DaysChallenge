#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string findOrder(string s[], int n, int K) {
      
        vector<bool> present(26 , 0);
        vector<int> indeg(26 , 0);
        vector<int> adj[26];
        for (int i = 0 ; i<n-1 ; i++){
            for (int j = 0 ; j<min((int)s[i].size(),(int)s[i+1].size()) ; j++){
                if (s[i][j] != s[i+1][j]){
                    adj[s[i][j]-'a'].push_back((s[i+1][j]-'a'));
                    present[s[i][j]-'a'] = 1;
                    present[s[i+1][j]-'a']= 1;
                    indeg[s[i+1][j]-'a']++;
                    break;
                }
            }
        }
        string ans;
        queue<int>q;
        for (int i = 0 ; i<26 ; i++){
            if (indeg[i] == 0 and present[i]){
                q.push(i);
            }
        }
        
        while (!q.empty()){
            int sz = q.size();
            while (sz--){
                auto it = q.front(); q.pop();
                //cout << it << '\n';
                ans.push_back(it+'a');
                for (auto x : adj[it]){
                    indeg[x]--;
                    if (indeg[x] == 0){
                        q.push(x);
                    }
                }
            }
        }
        //cout << ans <<'\n';
        return ans;
    }
};