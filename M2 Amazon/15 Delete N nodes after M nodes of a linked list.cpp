#include<bits/stdc++.h>
using namespace std;


// delete n nodes after m nodes
//   The input list will have at least one element  
//   Node is defined as 

// struct Node
// {
//     int data;
//     struct Node *next;
    
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
    
// };

class Solution
{
    public:
    void linkdelete(struct Node  *head, int m, int n)
    {
        //Add code here   
        Node *p1, *p2;
        p1=head;
        p2=head;
        
        while(p1!=NULL && p2!=NULL)
        {
            int cnt=m;
            while(cnt>1 && p1!=NULL)
            {
                p1=p1->next;
                cnt--;
            }
            if(p1==NULL)
            return ;
            
            p2=p1;
            cnt=n;
            while(cnt>=0 && p1!=NULL)
            {
                p1=p1->next;
                cnt--;
            }
            // if(p1==NULL)
            // return ;
            
            p2->next=p1;
        }
        return;
    }
};