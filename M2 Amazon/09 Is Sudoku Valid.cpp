#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    bool can_place(int number,int i,int j,int n,vector<vector<int>>&a)
    {
        for(int k=0;k<n;k++)
        {
            if(a[i][k]==number || a[k][j]==number)
            return false;
        }
        //Sub matrix
        int sx=(i/3)*3;
        int sy=(j/3)*3;
        for(int k1=sx;k1<sx+3;k1++)
        {
            for(int k2=sy;k2<sy+3;k2++)
            {
                if(a[k1][k2]==number)
                return false;
            }
        } 
        return true;
    }


    bool solve_sudoku(vector<vector<int>>&a,int n, int i, int j)
    {
        if(i==n)
        return true;
        
        //Case row end
        if(j==n)
        {
            return solve_sudoku(a,n,i+1,0);
        }
        
        //prefilled cells
        if(a[i][j]!=0)
        return solve_sudoku(a,n,i,j+1);
        
        //Recursive call
        for(int number=1;number<=n;number++)
        {
            if(can_place(number,i,j,n,a))
            {
                a[i][j]=number;
                bool canWeSolve=solve_sudoku(a,n,i,j+1);
                if(canWeSolve)
                return true;
            }
        }
        //BackTrack
        a[i][j]=0;
        return false;
        
    }
    int isValid(vector<vector<int>> a){
        // code here
        int n=a.size();
        
        return solve_sudoku(a,n,0,0);
        
    }
};


/////////////
/* Don't know why it gives TLE here while same code has been accepted at Leetcode
  may be due to multiple recursive call its take some high time complexity*/