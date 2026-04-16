#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        int n = nums.size();
        int res = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                res = min(res, abs(i - start));
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5, start = 3;

    cout << obj.getMinDistance(nums, target, start) << endl;

    return 0;
}