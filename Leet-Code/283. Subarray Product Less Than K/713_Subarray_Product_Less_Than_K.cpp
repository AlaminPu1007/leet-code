#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {

        if (k <= 1)
            return 0;

        int len = nums.size(), ans = 0;
        int left = 0, right = 0, mul = 1;

        for (right = 0; right < len; right++)
        {
            mul *= nums[right];

            while (mul >= k)
            {
                mul /= nums[left++];
            }

            ans += (right - left) + 1;
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {10, 5, 2, 6};
    cout << obj.numSubarrayProductLessThanK(arr, 100) << endl;
    return 0;
}