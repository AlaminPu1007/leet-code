#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxValue(vector<vector<int>> &events, int k)
    {
        int n = events.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
        // sort the array by starting time
        sort(events.begin(), events.end());

        return Solved(0, events, k, n, dp);
    }

private:
    int Solved(int i, vector<vector<int>> &arr, int k, int n, vector<vector<int>> &dp)
    {
        if (i >= n || k <= 0)
            return 0;

        if (dp[i][k] != -1)
            return dp[i][k];

        int start = arr[i][0];
        int end = arr[i][1];
        int value = arr[i][2];

        int j = i + 1;

        for (; j < n; j++)
            if (end < arr[j][0])
                break;

        // if we take this event
        int take = value + Solved(j, arr, k - 1, n, dp);

        // if we do not take this event or skip
        int skip = Solved(i + 1, arr, k, n, dp);

        return dp[i][k] = max(take, skip);
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 2, 4}, {3, 4, 3}, {2, 3, 1}};
    cout << obj.maxValue(arr, 2) << endl;

    return 0;
}