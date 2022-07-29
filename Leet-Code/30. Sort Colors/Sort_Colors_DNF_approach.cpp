/**
  # DNF -- Dutch National Flag
    learn more --> https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
    Memory Usage: 8.2 MB, less than 90.39% of C++ online submissions for Sort Colors.

 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int high = nums.size() - 1, mid = 0, low = 0;
        // loop through until mid<=high
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                // swap mid position element with low position value
                swap(nums[mid++], nums[low++]);
            }
            else if (nums[mid] == 1)
            {
                // we do not need to swap any element,
                // we just keep track of mid value,
                mid++;
            }
            else
            {
                // if number is two, we put it last element and decrement of hight value
                // to push next element their
                swap(nums[mid], nums[high--]);
            }
        }
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    obj.sortColors(arr);
    return 0;
}