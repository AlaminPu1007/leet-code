
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestArithSeqLength(vector<int> &nums)
    {
        int res = 0, n = nums.size();
        vector<vector<int>> dp(n, vector<int>(1001, 0));

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int diff = (nums[i] - nums[j]) + 500; // to avoid negative value, added extra 500, ex: can be any positive number

                dp[i][diff] = max(dp[i][diff], dp[j][diff] > 0 ? dp[j][diff] + 1 : 2);

                res = max(res, dp[i][diff]);
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 6, 9, 12};
    cout << obj.longestArithSeqLength(arr) << endl;

    return 0;
}