/**
 * This solution will give us "Time Limit Exceeded".
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubsequence(vector<int> &arr, int difference)
    {
        int res = 0;
        int n = arr.size();
        vector<int> dp(n + 1, -1);

        for (int i = 0; i < n; i++)
            res = max(res, 1 + Solve(i, arr, difference, dp));

        return res;
    }

private:
    int Solve(int i, vector<int> &arr, int diff, vector<int> &dp)
    {
        if (i > arr.size())
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int res = 0;

        for (int j = i + 1; j < arr.size(); j++)
        {

            if (j < arr.size())
            {
                int prev = arr[i], cur = arr[j];
                int value = cur - prev;

                if (value == diff)
                    res = max(res, 1 + Solve(j, arr, diff, dp));
            }
        }

        return dp[i] = res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 5, 7, 8, 5, 3, 4, 2, 1};
    cout << obj.longestSubsequence(arr, -2) << endl;

    return 0;
}