#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int waysToSplitArray(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;
        long sum = 0, cur_sum = 0;

        for (auto item : nums)
            sum += item;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            cur_sum += nums[i];

            sum -= nums[i];

            if (cur_sum >= sum)
                res++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {10, 4, -8, 7};

    cout << obj.waysToSplitArray(nums) << endl;
    return 0;
}