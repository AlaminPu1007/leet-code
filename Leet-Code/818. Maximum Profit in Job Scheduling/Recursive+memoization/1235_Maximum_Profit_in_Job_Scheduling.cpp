#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
    {
        int n = startTime.size();
        vector<vector<int>> arr(n, vector<int>(3, 0));
        vector<int> dp(n + 1, -1);

        for (int i = 0; i < n; i++)
        {
            arr[i][0] = startTime[i];
            arr[i][1] = endTime[i];
            arr[i][2] = profit[i];
        }

        // sort the array according to their start-time
        sort(arr.begin(), arr.end());

        return Solved(0, n, arr, dp);
    }

private:
    int Solved(int idx, int n, vector<vector<int>> &arr, vector<int> &dp)
    {
        if (idx >= n)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int nextItem = getNextItem(idx + 1, n, arr, arr[idx][1]);

        int pick = arr[idx][2] + Solved(nextItem, n, arr, dp);
        int notPick = Solved(idx + 1, n, arr, dp);

        return dp[idx] = max(pick, notPick);
    }

private:
    // perform a binary search to get next valid item index
    int getNextItem(int i, int n, vector<vector<int>> &arr, int target)
    {
        int l = i, r = n - 1;
        int res = n + 1;

        while (l <= r)
        {
            // to prevent the overflow
            int mid = l + (r - l) / 2;

            // the target must be greater than or equal to the arr first item
            // ex: where start time
            if (arr[mid][0] >= target)
            {
                r = mid - 1;
                res = mid;
            }
            else
                l = mid + 1;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    // vector<int> startTime = {1, 2, 3, 4, 6}, endTime = {3, 5, 10, 6, 9}, profit = {20, 20, 100, 70, 60};
    vector<int> startTime = {1, 2, 3, 3}, endTime = {3, 4, 5, 6}, profit = {50, 10, 40, 70};

    cout << obj.jobScheduling(startTime, endTime, profit) << endl;

    return 0;
}