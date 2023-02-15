// NOTE: The test cases are generated such that you can reach nums[n - 1]

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int len = nums.size() - 1;
        int curEnd = 0, res = 0;
        int nextItemJump = 0;

        for (int i = 0; i < len; i++)
        {
            // i -> is tell us the current index of jum to performing,
            // and nums[i] -> tell us, how far can we actually jump
            // so, i + nums[i] -> tell us, what the farther location we could jump to
            nextItemJump = max(nextItemJump, i + nums[i]);
            // if current jump and nextJum are equal, then
            if (i == curEnd)
            {
                res++;
                curEnd = nextItemJump;
            }
        }
        return res;
    }
};