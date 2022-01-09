#include<bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */


class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int>a;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            if(temp==NULL)
            {
                a.push_back(0);
                continue;
            }
            a.push_back(temp->data);
            if(temp->left)
            q.push(temp->left);
            else
            q.push(NULL);
            if(temp->right)
            q.push(temp->right);
            else
            q.push(NULL);
            
        }
        return a;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &a)
    {
       //Your code here 
       queue<Node*>q;
       int i=1;
       int n=a.size();
       Node* root=new Node(a[0]);
       q.push(root);
       while(i<n)
       {
           auto temp=q.front();
           q.pop();
           if(a[i]==0)
           {
               temp->left=NULL;
           }
           else
           {
               temp->left=new Node(a[i]);
               q.push(temp->left);
           }
           if(a[i+1]==0)
           {
               temp->right=NULL;
           }
           else
           {
               temp->right=new Node(a[i+1]);
               q.push(temp->right);
           }
           i+=2;
           
       }
       
       return root;
    }

};