#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int regionsBySlashes(vector<string> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        int n1 = n * 3, m1 = m * 3;

        vector<vector<int>> matrix(n1, vector<int>(m1, 0));

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int new_row = i * 3, new_col = j * 3;

                if (grid[i][j] == '\\')
                {
                    matrix[new_row][new_col] = 1;
                    matrix[new_row + 1][new_col + 1] = 1;
                    matrix[new_row + 2][new_col + 2] = 1;
                }
                else if (grid[i][j] == '/')
                {
                    matrix[new_row][new_col + 2] = 1;
                    matrix[new_row + 1][new_col + 1] = 1;
                    matrix[new_row + 2][new_col] = 1;
                }
            }
        }

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                if (matrix[i][j] == 0)
                {
                    cout << i << " " << j << endl;
                    isValidIsland(i, j, n1, m1, matrix);
                    res++;
                }
            }
        }

        return res;
    }

private:
    void isValidIsland(int row, int col, int n, int m, vector<vector<int>> &matrix)
    {
        // mark as visited
        matrix[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        int del_row[] = {0, 1, 0, -1};
        int del_col[] = {1, 0, -1, 0};

        while (q.size())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            // traverse matrix in four direction
            for (int i = 0; i < 4; i++)
            {
                int new_row = del_row[i] + r;
                int new_col = del_col[i] + c;

                cout << new_row << " " << new_col << endl;

                if (isValidCell(new_row, new_col, n, m, matrix))
                {
                    q.push({new_row, new_col});
                    matrix[new_row][new_col] = 1;
                }
            }
        }
    }

private:
    bool isValidCell(int row, int col, int n, int m, vector<vector<int>> &matrix)
    {
        if (row >= 0 && row < n && col >= 0 && col < m && matrix[row][col] == 0)
            return true;

        return false;
    }
};

int main(void)
{
    vector<string> str = {"/\\", "\\/"};
    Solution obj;
    cout << obj.regionsBySlashes(str) << endl;
    return 0;
}