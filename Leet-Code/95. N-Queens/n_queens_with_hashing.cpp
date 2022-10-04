
// Approach-2
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void Solved(int col, vector<string> &board, vector<vector<string>> &ans, int n, vector<int> &up, vector<int> &down, vector<int> &leftR)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (up[(n - 1) + (col - row)] == 0 && down[row + col] == 0 && leftR[row] == 0)
            {
                up[(n - 1) + (col - row)] = 1;
                down[row + col] = 1;
                leftR[row] = 1;

                board[row][col] = 'Q';
                Solved(col + 1, board, ans, n, up, down, leftR);
                board[row][col] = '.';

                up[(n - 1) + (col - row)] = 0;
                down[row + col] = 0;
                leftR[row] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');

        for (int i = 0; i < n; i++)
            board[i] = s;
        // make an hash array for, upper,oower diagonal,and horizontal-left visit
        vector<int> upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0), leftHorizontal(n, 0);

        // method for recursive solution
        Solved(0, board, ans, n, upperDiagonal, lowerDiagonal, leftHorizontal);

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<string>> res = obj.solveNQueens(4);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << endl;
        cout << endl;
    }

    return 0;
}