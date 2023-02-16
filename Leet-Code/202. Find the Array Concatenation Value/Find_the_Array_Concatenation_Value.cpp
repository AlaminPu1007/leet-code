#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findTheArrayConcVal(vector<int> &nums)
    {
        int len = nums.size();
        long long res = 0;

        for (int i = 0; i < len / 2; i++)
        {
            string firstValue = to_string(nums[i]);
            string lastValue = to_string(nums[len - i - 1]);

            string newValue = firstValue + lastValue;

            res += stoi(newValue);
        }

        if (len % 2)
        {
            res += nums[len / 2];
        }

        return res;
    }
};