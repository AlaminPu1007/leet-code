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
        unordered_map<int, int> dp;

        for (int i = 0; i < n; i++)
        {
            int diff = arr[i] - difference;

            dp[arr[i]] = dp[diff] + 1;

            res = max(dp[arr[i]], res);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 5, 7, 8, 5, 3, 4, 2, 1};
    cout << obj.longestSubsequence(arr, -2) << endl;

    return 0;
}