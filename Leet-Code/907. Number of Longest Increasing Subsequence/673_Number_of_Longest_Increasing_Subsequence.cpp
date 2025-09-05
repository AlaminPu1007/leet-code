#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, int> IPair;

public:
    int findNumberOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, 1), count(n, 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    if (dp[i] == (dp[j] + 1))
                    {
                        count[i] += count[j];
                    }
                    else if (dp[i] < dp[j] + 1)
                    {
                        dp[i] = dp[j] + 1;
                        count[i] = count[j];
                    }
                }
            }
        }

        int res = 0, maxValue = *max_element(begin(dp), end(dp));

        for (int i = 0; i < n; i++)
        {
            if (dp[i] == maxValue)
                res += count[i];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 2, 2, 2, 2};

    cout << obj.findNumberOfLIS(arr) << endl;

    return 0;
}