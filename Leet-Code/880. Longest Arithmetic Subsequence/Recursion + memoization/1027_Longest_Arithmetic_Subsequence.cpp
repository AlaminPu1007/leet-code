/**
 * This solution will give us "Time Limit Exceeded"
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestArithSeqLength(vector<int> &nums)
    {
        int res = 0, n = nums.size();
        unordered_map<string, int> cache;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = (nums[j] - nums[i]);

                res = max(res, 2 + Solved(i, diff, nums, cache));
            }
        }

        return res;
    }

private:
    int Solved(int i, int diff, vector<int> &nums, unordered_map<string, int> &cache)
    {
        if (i < 0)
            return 0;

        string key = to_string(i) + "_" + to_string(diff);

        if (cache.find(key) != cache.end())
            return cache[key];

        int ans = 0;

        for (int k = i - 1; k >= 0; k--)
        {
            if (nums[i] - nums[k] == diff)
                ans = max(ans, 1 + Solved(k, diff, nums, cache));
        }

        return cache[key] = ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 6, 9, 12};
    cout << obj.longestArithSeqLength(arr) << endl;

    return 0;
}