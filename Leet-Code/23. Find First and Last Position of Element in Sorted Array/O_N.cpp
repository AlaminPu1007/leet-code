/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
Memory Usage: 13.7 MB, less than 17.99% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int ans = 0, mid = 0, heigh = nums.size(), low = 0;
        vector<int> res(2, -1);
        // first find the first element
        for (int i = 0; i < heigh; i++)
        {
            if (nums[i] == target)
            {
                res[0] = i;
                break;
            }
        }
        // first find the second element
        for (int i = heigh - 1; i >= 0; i--)
        {
            if (nums[i] == target)
            {
                res[1] = i;
                break;
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {5, 7, 7, 8, 8, 8, 10};
    int target = 8;

    vector<int> ans = obj.searchRange(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}