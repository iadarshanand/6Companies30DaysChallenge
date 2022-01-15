#include<bits/stdc++.h>
using namespace std;

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int m, int n) 
    {
        // code here
        vector<int>a;
    if (m == 1 || n == 1)
    {
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                a.push_back(arr[i][j]);
            }
        }
    }
    else
    {
        int row_s = 0, row_e = m - 1, col_s = 0, col_e = n - 1;
        while (row_s <= row_e && col_s <= col_e)
        {
            //first row left-right..
            for (int j = col_s; j <= col_e ; j++)
                a.push_back(arr[row_s][j]);
            //last column top-bottom
            for (int i = row_s + 1; i <= row_e; ++i)
                a.push_back(arr[i][col_e]);
            //last row right-left
            for (int j = col_e - 1; j >= col_s ; j--)
            {
            // Here I am handling edge case
            if(row_e!=row_s)
                a.push_back(arr[row_e][j]);
            }
            //first column bottom-top
            for (int i = row_e - 1; i > row_s; --i)
                if(col_e!=col_s)
                a.push_back(arr[i][col_s]);
            row_s++, row_e--, col_s++, col_e--;
        }
               
    }
    // cout << "END";
    return  a; 
    
    }
};