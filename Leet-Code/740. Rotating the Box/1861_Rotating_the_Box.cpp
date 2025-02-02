#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>> &box)
    {
        int n = box.size(), m = box[0].size();
        vector<vector<char>> res;

        for (int row = 0; row < n; row++)
        {
            // keep track of the right most pointer
            int right = m - 1;

            // iterate over the columns
            for (int col = m - 1; col >= 0; col--)
            {
                // if it's stones
                if (box[row][col] == '#')
                {
                    swap(box[row][col], box[row][right]);
                    right--;
                }
                // if it's an obstacle, then just ensure right pointer
                // always on col - 1 positions
                else if (box[row][col] == '*')
                {
                    right = col - 1;
                }
            }
        }

        // make result array by rotating the matrix
        for (int col = 0; col < m; col++)
        {
            vector<char> temp;

            for (int row = n - 1; row >= 0; row--)
                temp.push_back(box[row][col]);

            res.push_back(temp);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<char>> grid = {
        {'#', '#', '*', '.', '*', '.'},
        {'#', '#', '#', '*', '.', '.'},
        {'#', '#', '#', '.', '#', '.'}};

    vector<vector<char>> res = obj.rotateTheBox(grid);

    for (auto row : res)
    {
        for (auto col : row)
            cout << col << " ";
        cout << endl;
    }

    return 0;
}