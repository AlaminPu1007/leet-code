#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSumOfThreeSubarrays(vector<int> &nums, int k)
    {
        // Number of possible subarray starting positions
        int n = nums.size() - k + 1;

        // Calculate sum of all possible k-length subarrays
        vector<int> sums(n);
        int windowSum = 0;

        for (int i = 0; i < k; i++)
            windowSum += nums[i];

        sums[0] = windowSum;

        // Sliding window to calculate remaining sums
        for (int i = k; i < nums.size(); i++)
        {
            windowSum = windowSum - nums[i - k] + nums[i];
            sums[i - k + 1] = windowSum;
        }

        vector<vector<int>> memo(n, vector<int>(4, -1));
        vector<int> indices;

        // First find optimal sum using DP
        dp(sums, k, 0, 3, memo);

        // Then reconstruct the path to find indices
        dfs(sums, k, 0, 3, memo, indices);

        return indices;
    }

private:
    // DP function to find maximum possible sum
    int dp(vector<int> &sums, int k, int idx, int rem,
           vector<vector<int>> &memo)
    {
        if (rem == 0)
            return 0;

        if (idx >= sums.size())
        {
            return rem > 0 ? INT_MIN : 0;
        }

        if (memo[idx][rem] != -1)
            return memo[idx][rem];

        // Try taking current subarray vs skipping it
        int withCurrent = sums[idx] + dp(sums, k, idx + k, rem - 1, memo);
        int skipCurrent = dp(sums, k, idx + 1, rem, memo);

        return memo[idx][rem] = max(withCurrent, skipCurrent);
    }

    // DFS to reconstruct the solution path
    void dfs(vector<int> &sums, int k, int idx, int rem,
             vector<vector<int>> &memo, vector<int> &indices)
    {
        if (rem == 0)
            return;

        if (idx >= sums.size())
            return;

        int withCurrent = sums[idx] + dp(sums, k, idx + k, rem - 1, memo);
        int skipCurrent = dp(sums, k, idx + 1, rem, memo);

        // Choose path that gave optimal result in DP
        if (withCurrent >= skipCurrent)
        { // Take current subarray
            indices.push_back(idx);
            dfs(sums, k, idx + k, rem - 1, memo, indices);
        }
        else
        { // Skip current subarray
            dfs(sums, k, idx + 1, rem, memo, indices);
        }
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 1, 2, 6, 7, 5, 1};
    int k = 2;

    vector<int> res = obj.maxSumOfThreeSubarrays(nums, k);

    for (auto item : res)
        cout << item << " ";
    return 0;
}
