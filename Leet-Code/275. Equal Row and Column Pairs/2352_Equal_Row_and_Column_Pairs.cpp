#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {

        map<vector<int>, int> Map;
        int n = grid.size(), m = grid[0].size();
        int count = 0;

        for (auto row : grid)
        {
            Map[row]++;
        }

        for (int i = 0; i < n; i++)
        {
            vector<int> column_list = {};

            for (int col = 0; col < m; col++)
            {
                column_list.push_back(grid[col][i]);
            }

            count += Map[column_list];
        }

        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{3, 1, 2, 2}, {1, 4, 4, 5}, {2, 4, 2, 2}, {2, 4, 2, 2}};
    cout << obj.equalPairs(grid) << endl;
    return 0;
}