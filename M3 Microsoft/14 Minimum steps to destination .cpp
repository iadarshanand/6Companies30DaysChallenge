#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minSteps(int d){
        // code here
        int sum=0;
        int i=1;
        while(sum<d)
        {
            sum+=i;
            i++;
        }
        if(sum==d || (sum-d)%2==0)
        return i-1;
        
        sum+=i;
        i++;
        if((sum-d)%2==0)
        return i-1;
        
        return i;
        
        
    }
};