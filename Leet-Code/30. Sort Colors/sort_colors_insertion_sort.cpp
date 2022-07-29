/**
  # Insertion sort approach
 *  Runtime: 4 ms, faster than 44.61% of C++ online submissions for Sort Colors.
    Memory Usage: 8.4 MB, less than 23.39% of C++ online submissions for Sort Colors.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int len = nums.size();
        for (int i = 1; i < len; i++)
        {
            /// make an copy of each item
            int key = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] > key)
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
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