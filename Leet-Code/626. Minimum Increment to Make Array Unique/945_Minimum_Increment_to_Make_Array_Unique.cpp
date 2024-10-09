#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minIncrementForUnique(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;

        // sort the root array
        sort(nums.begin(), nums.end());

        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] >= nums[i])
            {
                int minIncrement = (nums[i - 1] + 1) - nums[i];
                res += minIncrement;

                nums[i] = nums[i - 1] + 1;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 2, 1, 2, 1, 7};
    cout << obj.minIncrementForUnique(arr) << endl;
    return 0;
}