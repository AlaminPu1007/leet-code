/*
Runtime: 17 ms, faster than 26.31% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
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
        int ans = 0, mid = 0, heigh = nums.size() - 1, low = 0;
        vector<int> res(2, -1);

        // check the first occurrence of element
        while (low <= heigh)
        {
            mid = (low + heigh) / 2;

            // if value is found
            if (nums[mid] == target)
            {
                // get the first occur element
                res[0] = mid;
                // Again searches the left side, to getting the first element
                heigh = mid - 1;
            }
            else if (nums[mid] < target)
            {
                // check right sight
                low = mid + 1;
            }
            else
            {
                // check left sight
                heigh = mid - 1;
            }
        }

        heigh = nums.size() - 1, low = 0;
        // check the last occurrence of element
        while (low <= heigh)
        {
            mid = (low + heigh) / 2;

            // if value is found
            if (nums[mid] == target)
            {
                // get the first occur element
                res[1] = mid;
                // Again searches the left side, to getting the first element
                low = mid + 1;
            }
            else if (nums[mid] < target)
            {
                // check right sight
                low = mid + 1;
            }
            else
            {
                // check left sight
                heigh = mid - 1;
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