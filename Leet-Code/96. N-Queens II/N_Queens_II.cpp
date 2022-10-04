#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void Solved(int col, vector<vector<string>> &ans, vector<string> &board, vector<int> &up, vector<int> &down, vector<int> &left, int n)
    {
        if(col == n)
        {
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++)
        {
            if(up[(n-1)+(col-row)] == 0 && down[row + col] == 0 && left[row] == 0)
            {
                up[(n-1)+(col-row)] = 1;
                down[row + col] = 1;
                left[row] = 1;
                
                board[row][col] = 'Q';
                
                Solved(col+1, ans, board, up,down, left, n);
                
                up[(n-1)+(col-row)] = 0;
                down[row + col] = 0;
                left[row] = 0;
                
                board[row][col] = '.';
            }
        }
    }

    int totalNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        //push n times string inside vector
        for(int i = 0; i < n; i++)
            board[i] = s;
            
        vector<int> up(2*n-1,0), down(2*n-1,0), left(n,0);
        
        //recursive method to get N-Queens
        Solved(0, ans, board, up,down, left, n);
        
        return ans.size();
    }
};