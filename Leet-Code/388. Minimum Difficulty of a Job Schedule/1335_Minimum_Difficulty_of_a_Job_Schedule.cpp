#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[301][11];

public:
    int minDifficulty(vector<int> &jobDifficulty, int d)
    {
        int n = jobDifficulty.size();

        if (n < d)
            return -1;

        memset(dp, -1, sizeof(dp));

        return DFS(0, jobDifficulty, n, d);
    }

private:
    int DFS(int idx, vector<int> &arr, int n, int d)
    {
        // this is our BASE CASE, for all day = 1,
        // we need to find out the possible maximum value
        if (d == 1)
        {
            int maxDay = arr[idx];

            for (int i = idx; i < n; i++)
            {
                maxDay = max(maxDay, arr[i]);
            }
            return maxDay;
        }

        if (dp[idx][d] != -1)
            return dp[idx][d];

        int maxDay = arr[idx];
        int finalResult = INT_MAX;

        // Try one by one other possible way
        for (int i = idx; i <= n - d; i++)
        {
            maxDay = max(maxDay, arr[i]);

            int res = maxDay + DFS(i + 1, arr, n, d - 1);

            finalResult = min(finalResult, res);
        }
        dp[idx][d] = finalResult;

        return dp[idx][d];
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {6, 5, 4, 3, 2, 1};
    cout << obj.minDifficulty(arr, 2) << endl;
    return 0;
}