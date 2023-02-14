#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        int len = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            res.push_back(nums[i]);
            res.push_back(nums[n + i]);
        }
        return res;
    }
};