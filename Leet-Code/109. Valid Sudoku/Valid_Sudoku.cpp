#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //Find the valid suduko
        if(Solve(board)) 
            return true;
        
        return false;
    }
    // method to find valud suduko
    bool Solve(vector<vector<char>> &board)
    {
        int row_len = board.size(), col_len = board[0].size();
        
        for(int row = 0; row < row_len; row++)
        {
            for(int col = 0; col < col_len; col++)
            {
                if (board[row][col] != '.') {
                    
                    if(!isValid(row, col, board[row][col], board))
                        return false;
                  }
            }
        }
        return true;
    }
    // check it's valid to push
    bool isValid(int row, int col, char ch, vector<vector<char>>& board)
    {
        for(int i = 0; i < 9; i++)
        {
            if(i!=col && board[row][i] == ch){
                return false;
            }
            
            if(i!=row && board[i][col] == ch){
                return false;
            }
            
            int x = 3 * (row / 3) + i / 3;
            int y = 3 * (col / 3) + i % 3;
            
            if(x!=row && y!=col && board[x][y] == ch){
                return false;
            }
        }
        
        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<char>> board 
    {
        {'.','8','7','6','5','4','3','2','1'},
        {'2','.','.','.','.','.','.','.','.'},
        {'3','.','.','.','.','.','.','.','.'},
        {'4','.','.','.','.','.','.','.','.'},
        {'5','.','.','.','.','.','.','.','.'},
        {'6','.','.','.','.','.','.','.','.'},
        {'7','.','.','.','.','.','.','.','.'},
        {'8','.','.','.','.','.','.','.','.'},
        {'9','.','.','.','.','.','.','.','.'}
    };
    
    bool res = obj.isValidSudoku(board);
    cout<<res<<endl;
    
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}