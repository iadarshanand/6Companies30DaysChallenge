#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long  countSubArrayProductLessThanK(const vector<int>& a, long long n, long long k) 
    {
        long long cnt=0;
        long long i=0,j=0;
        // int n=a.size();
        long long cur_mul=1;
        while(j<n)
        {
            while(j<n && cur_mul<k)
            {
                cur_mul*=a[j];
                j++;
            }
            cnt+=((j-i-1)*(j-i))/2;
            while(i<j && cur_mul>=k)
            {
                cur_mul/=a[i];
                i++;
            }
            cnt-=((j-i-1)*(j-i))/2;
            
        }
        cnt+=((j-i)*(j-i+1))/2;
        return cnt;
        
    }
};