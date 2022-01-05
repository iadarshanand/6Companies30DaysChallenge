
#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // code here
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            ans+=((n-i+1)*(n-i+1));
        }
        return ans;
        
    }
};