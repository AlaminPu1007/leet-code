//Approach-1
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    bool isPutQueen(int row, int col, vector<string>board, int n)
    {
        int copyRow = row, copyCol = col;
        //check upper diagonal value
        while(row >= 0 && col >= 0)
        {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        //check only left horizontal order
        col = copyCol, row = copyRow;
        while(col >= 0)
        {
            if(board[row][col] == 'Q') return false;
            col--;
        }
        
        //check bottom diagonal value
        row = copyRow,  col = copyCol;
        while(col >= 0 && row < n)
        {
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        
        return true;
    }
    
    void Solved(int col, vector<string> &board, vector<vector<string>> &ans, int n)
    {
        if (col == n) {
            ans.push_back(board);
            return;
          }
      
        for(int row = 0; row < n; row++)
        {
            if(isPutQueen(row, col, board, n))
            {
                board[row][col] = 'Q';
                Solved(col + 1, board, ans, n);
                //make it previous state, after completed recursion
                board[row][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string>board(n);
        string s (n, '.');
        
        for(int i = 0; i < n; i++)
            board[i] = s;
        
        //method for recursive solution
        Solved(0,board, ans, n);
        
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<string>> res = obj.solveNQueens(4);
    
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
            cout<<res[i][j]<<endl;
        cout<<endl;
    }
    
    return 0;
}