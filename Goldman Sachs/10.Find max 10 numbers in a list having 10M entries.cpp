// Using minHeap


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    if(n<=10)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            
            int val;
            cin>>val;
            v.push_back(val);
        }
        sort(v.begin(),v.end());
        for(auto x:v)
        cout<<x<<" ";
        cout<<endl;
    }
    else
    {
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<10;i++)
        {
            int val;
            cin>>val;
            pq.push(val);
        }
        for(int i=10;i<n;i++)
        {
            int val;
            cin>>val;
            if(val>pq.top())
            {
                pq.pop();
                pq.push(val);
            }
        }

        while(!pq.empty())
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
    }
    return 0;

}
