#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lis(vector<int>v){
        vector<int>res;
        for(int i=0; i<v.size(); i++){
            auto it = lower_bound(res.begin(),res.end(),v[i]);
            if(it == res.end()){
                res.push_back(v[i]);
            }
            else{
                *it = v[i];
            }
        }
        return res.size();
    }
    
 
    int minInsAndDel(int a[], int b[], int n, int m) {
        
        vector<int> v;
        set<int> st;
        
        for (int j = 0 ; j<m ; j++){
            st.insert(b[j]);
        }
        
        for (int i = 0 ; i<n ; i++){
            if (st.count(a[i])){
                v.push_back(a[i]);
            }
        }
        int l = lis(v);
        int ans = (n-l) + (m-l);
        return ans;
    }
};