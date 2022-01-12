#include<bits/stdc++.h>
using namespace std;


//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
//Function to count number of subtrees having sum equal to given sum.
int cnt=0;
int f(Node* root, int k)
{
    if(root==NULL)
	return 0;
	
	int op1=f(root->left,k);
	int op2=f(root->right,k);
	int val=op1+op2+root->data;
	if(val==k)
	cnt++;
	return val;
}
int countSubtreesWithSumX(Node* root, int k)
{
	// Code here
    cnt=0;
    f(root,k);
    return cnt;
}