#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool predictTheWinner(vector<int> &nums)
    {
        int n = nums.size();
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>> dp(30, vector<int>(30, -1));

        int player_1 = Solve(0, n - 1, nums, dp);
        int player_2 = total_sum - player_1;

        return player_1 >= player_2;
    }
    int Solve(int i, int j, vector<int> &nums, vector<vector<int>> &dp)
    {
        if (i > j)
            return 0;

        if (i == j)
            return nums[j];

        if (dp[i][j] != -1)
            return dp[i][j];

        int take_i = nums[i] + min(Solve(i + 2, j, nums, dp), Solve(i + 1, j - 1, nums, dp));
        int take_j = nums[j] + min(Solve(i, j - 2, nums, dp), Solve(i + 1, j - 1, nums, dp));

        return dp[i][j] = max(take_i, take_j);
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 5, 233, 7};

    cout << obj.predictTheWinner(arr) << endl;

    return 0;
}