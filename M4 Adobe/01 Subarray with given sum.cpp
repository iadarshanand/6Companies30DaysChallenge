#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        long long cnt=0;
        int i=0,j=0;
        while(j<n)
        {
            if(cnt<s)
            {
                cnt+=a[j];
                j++;
            }
            else if(cnt>s)
            {
                cnt-=a[i];
                i++;
            }
            else
            {
                return {i+1,j};
            }
        }
        while(cnt>=s)
        {
            if(cnt==s)
            return {i+1,j};
            else if(cnt>s)
            {
                cnt-=a[i];
                i++;
            }
        }
        return {-1};
    }
};