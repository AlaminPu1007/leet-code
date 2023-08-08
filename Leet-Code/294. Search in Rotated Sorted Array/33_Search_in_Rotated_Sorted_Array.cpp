#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = (right + left) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[left] <= nums[mid])
            {
                if ((target > nums[mid]) || (nums[left] > target))
                    left = mid + 1;

                // we need to move right pointer
                else
                    right = mid - 1;
            }
            else
            {
                if (target < nums[mid] || target > nums[right])
                    right = mid - 1;

                else
                    left = mid + 1;
            }
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int t = 3;
    cout << obj.search(arr, t) << endl;
    return 0;
}