#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long minimumTotalDistance(vector<int> &robot, vector<vector<int>> &factory)
    {
        int n = robot.size(), m = factory.size();
        vector<int> factories;

        // Sort robots and factories by position
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        for (auto item : factory)
        {
            int pos = item[0];
            int count = item[1];

            for (int i = 0; i < count; i++)
            {
                factories.push_back(pos);
            }
        }

        vector<vector<long long>> dp(n, vector<long long>(factories.size() + 1, -1));

        return DFS(0, 0, robot, factory, n, m, factories, dp);
    }

private:
    long long DFS(int i, int j, vector<int> &robot, vector<vector<int>> &factory, int n, int m, vector<int> &factories, vector<vector<long long>> &dp)
    {
        // All robots assigned
        if (i == n)
            return 0;

        // No factories left to assign
        if (j == factories.size())
            return 1e12;

        if (dp[i][j] != -1)
            return dp[i][j];

        long long pick = abs(robot[i] - factories[j]) + DFS(i + 1, j + 1, robot, factory, n, m, factories, dp);

        long long skip = DFS(i, j + 1, robot, factory, n, m, factories, dp);

        return dp[i][j] = min(pick, skip);
    }
};

int main(void)
{
    Solution obj;
    vector<int> robot = {0, 4, 6};
    vector<vector<int>> factory = {{2, 2}, {6, 2}};
    cout << obj.minimumTotalDistance(robot, factory) << endl;
    return 0;
}