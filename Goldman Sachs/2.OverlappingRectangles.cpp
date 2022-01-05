#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) 
    {

        int l1x=l1[0];
        int l1y=l1[1];
        int r1x=r1[0];
        int r1y=r1[1];
        
        int l2x=l2[0];
        int l2y=l2[1];
        int r2x=r2[0];
        int r2y=r2[1];

    
        if (l1x>r2x || l2x>r1x)
            return false;
    
        if (r1y>l2y || r2y>l1y)
            return false;
    
        return true;        
    }
};