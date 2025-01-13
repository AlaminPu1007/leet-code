#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countMaxOrSubsets(vector<int> &nums)
    {
        int n = nums.size();
        int max_xor = 0;

        for (auto item : nums)
            max_xor |= item;

        vector<vector<int>> dp(n, vector<int>(max_xor + 1, -1));
        return DFS(nums, max_xor, 0, 0, dp);
    }

private:
    int DFS(vector<int> &nums, int max_xor, int i, int cur_xor, vector<vector<int>> &dp)
    {
        if (i >= nums.size())
        {
            if (cur_xor == max_xor)
                return 1;
            return 0;
        }

        if (dp[i][cur_xor] != -1)
            return dp[i][cur_xor];

        // skip the element
        int res = DFS(nums, max_xor, i + 1, cur_xor, dp) +
                  // get the element
                  DFS(nums, max_xor, i + 1, cur_xor | nums[i], dp);

        return dp[i][cur_xor] = res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 2, 1, 5};
    cout << obj.countMaxOrSubsets(arr) << endl;
    return 0;
}