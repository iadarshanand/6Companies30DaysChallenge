#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
  int max_time=0;
  
  void burnTree(Node* root,int t)
  {
      if(root==NULL)
      return;
      
      max_time=max(max_time,t);
      
      burnTree(root->left,t+1);
      burnTree(root->right,t+1);
  }
  
  int dfs(Node* root, int target)
  {
      if(root==NULL)
      return -1;
      
      if(root->data==target)
      {
          burnTree(root,0);
          return 0;
      }
      
      int leftChild=dfs(root->left,target);
      if(leftChild!=-1)
      {
          burnTree(root->right,leftChild+2);
          return leftChild+1;
      }
      
      int rightChild=dfs(root->right,target);
      if(rightChild!=-1)
      {
          burnTree(root->left,rightChild+2);
          return rightChild+1;
      }
      return -1;
  }
  
  
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        dfs(root,target);
        return max_time;
        
    }
};