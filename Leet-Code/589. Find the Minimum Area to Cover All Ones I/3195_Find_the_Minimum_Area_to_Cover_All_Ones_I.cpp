#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumArea(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int top = INT_MAX, bottom = INT_MIN, left = INT_MAX, right = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    top = min(top, i);
                    bottom = max(bottom, i);
                    left = min(left, j);
                    right = max(right, j);
                }
            }
        }
        return ((bottom - top) + 1) * ((right - left) + 1);
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{0, 1, 0}, {1, 0, 1}};
    cout << obj.minimumArea(grid) << endl;
    return 0;
}