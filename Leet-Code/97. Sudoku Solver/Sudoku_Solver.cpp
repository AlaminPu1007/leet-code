#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void solveSudoku(vector<vector<char>>& board) {
        // Called recursion method
        FillSudoku(board);
    }
    // method to fill up board with 1-9 
    bool FillSudoku(vector<vector<char>>& board)
    {
        int row_len = board.size(), col_len = board[0].size();
        
        for(int row = 0; row < row_len; row++)
        {
            for(int col = 0; col < col_len; col++)
            {
                if (board[row][col] == '.') {
                    for (char c = '1'; c <= '9'; c++) {
                        
                      if (isValid(board, row, col, c)) {
                        board[row][col] = c;
            
                        if (FillSudoku(board))
                          return true;
                          
                        else
                          board[row][col] = '.';
                      }
                    }
            
                    return false;
                  }
            }
        }
        return true;
    }
    // method to check item will be push or not
    bool isValid(vector<vector<char>>& board, int row, int col, char c)
    {
        for(int i = 0; i < 9; i++)
        {
            //find out each col
            if(board[i][col] == c)
                return false;
            
            // find each row
            if(board[row][i] == c)
                return false;
            
            //find out, each 3 X 3 matrix also, from it's starting position
            // for getting 3*3 matrix first index for row specific-> 3 * (row / 3) + (i / 3)
            
            // for getting 3*3 matrix first index for col specific-> 3 * (col / 3) + (i % 3)
            if(board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == c)
             return false;
        }
        
        return true;
    }
};

int main(void)
{
    Solution obj;
    
    vector<vector<char>>board{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
    };
    
    obj.solveSudoku(board);
    
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}