#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long gridGame(vector<vector<int>> &grid)
    {
        long long firstRowSums = accumulate(grid[0].begin(), grid[0].end(), 0LL);
        long long secondRowRemainingSum = 0;
        long long res = LONG_MAX;

        for (int i = 0; i < grid[0].size(); i++)
        {
            firstRowSums -= grid[0][i];

            // Robot2 will try to do best after Robot1 has taken the above strategy
            long long bestOfRobot2 = max(firstRowSums, secondRowRemainingSum);

            res = min(res, bestOfRobot2);

            // update secondRowRemainingSum
            secondRowRemainingSum += grid[1][i];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{2, 5, 4}, {1, 5, 1}};

    cout << obj.gridGame(grid) << endl;

    return 0;
}