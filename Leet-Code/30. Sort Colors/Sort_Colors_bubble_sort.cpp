/**
  #Bubble sort approach
 *  Runtime: 3 ms, faster than 62.94% of C++ online submissions for Sort Colors.
    Memory Usage: 8.3 MB, less than 23.39% of C++ online submissions for Sort Colors.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    // int temp = nums[j];
                    // nums[j] = nums[j + 1];
                    // nums[j + 1] = temp;
                    swap(nums[j], nums[j + 1]);
                }
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