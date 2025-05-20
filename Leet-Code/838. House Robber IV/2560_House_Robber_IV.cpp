/**
 * This solution will give us "Time Limit Exceeded".
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCapability(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));

        return Solved(0, nums, k, dp);
    }

private:
    int Solved(int i, vector<int> &arr, int k, vector<vector<int>> &dp)
    {
        if (k == 0)
            return 0;

        if (i >= arr.size())
            return INT_MAX;

        if (dp[i][k] != -1)
            return dp[i][k];

        int notTaken = Solved(i + 1, arr, k, dp);
        int taken = max(arr[i], Solved(i + 2, arr, k - 1, dp));

        return dp[i][k] = min(notTaken, taken);
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 5, 9};

    cout << obj.minCapability(arr, 2) << endl;

    return 0;
}