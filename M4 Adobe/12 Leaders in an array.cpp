#include<bits/stdc++.h>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int maxi=a[n-1];
        vector<int>v;
        v.push_back(maxi);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=maxi)
            {
                maxi=a[i];
                v.push_back(maxi);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
        
    }
};