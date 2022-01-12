#include<bits/stdc++.h>
using namespace std;

/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node*>q;
       q.push(root);
       q.push(NULL);
       while(!q.empty())
       {
           auto temp=q.front();
           q.pop();
           
           if(temp==NULL)
           {
               if(q.size()>0)
               q.push(NULL);
           }
           else
           {
           temp->nextRight=q.front();
           
           if(temp->left)
           q.push(temp->left);
           
           if(temp->right)
           q.push(temp->right);
           }
       }
    }    
      
};
