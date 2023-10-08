#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int n = nums.size();
        bool isIncreasing = false, isDecreasing = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                isIncreasing = true;

                if (isDecreasing)
                    return false;
            }
            else if (nums[i] > nums[i + 1])
            {
                isDecreasing = true;

                if (isIncreasing)
                    return false;
            }
        }
        return true;
    }
};

int main(void)
{
    Solution obj;
    // vector<int> nums = {6, 5, 4, 3, 2, 1};
    vector<int> nums = {1, 3, 2};
    cout << obj.isMonotonic(nums) << endl;
    return 0;
}