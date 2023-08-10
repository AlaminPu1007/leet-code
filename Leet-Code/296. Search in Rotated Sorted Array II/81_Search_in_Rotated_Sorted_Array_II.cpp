#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int right = nums.size() - 1, left = 0;

        while (left <= right)
        {
            // get mid,shift bit 1(>>1) equivalent to divided by 2
            int mid = (left + right) >> 1;

            if (nums[mid] == target)
                return true;

            // if there are duplicates
            if ((nums[left] == nums[mid]) && (nums[right] == nums[mid]))
            {
                left++;
                right--;
            }

            // check left portion of array is sorted
            else if (nums[left] <= nums[mid])
            {
                // check target is present left portion or not
                if ((target < nums[mid]) && (nums[left] <= target))
                    right = mid - 1;

                else
                    left = mid + 1;
            }

            // right portion of the array is sorted
            else
            {
                if ((target <= nums[right]) && (target > nums[mid]))
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int t = 3;
    cout << obj.search(nums, t) << endl;
    return 0;
}