
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int minOperations(vector<int> &nums, int x)
    {
        int len = nums.size(), sum = 0;
        int res = INT_MIN;

        unordered_map<int, int> Map;

        // for sum 0
        Map[0] = -1;

        for (int i = 0; i < len; i++)
        {
            sum += nums[i];
            Map[sum] = i;
        }

        if (sum < x)
            return -1;

        int remainingSum = sum - x; // 28 - 10 = 18
        sum = 0;

        // {3, 2, 20, 1, 1, 3} = 28;
        for (int i = 0; i < len; i++)
        {
            sum += nums[i];

            int value = sum - remainingSum;

            // we find that key in hash-map
            if (Map.find(value) != Map.end())
                res = max(res, i - Map[value]);
        }

        return res == INT_MIN ? -1 : len - res;
    }
};