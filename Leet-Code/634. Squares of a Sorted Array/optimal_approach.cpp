#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            nums[i] = nums[i] * nums[i];
        }

        int left = 0, right = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[left] > nums[right])
            {
                ans[i] = nums[left++];
            }
            else
            {
                ans[i] = nums[right--];
            }
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> res = obj.sortedSquares(nums);
    for (auto item : res)
        cout << item << " ";
    return 0;
}