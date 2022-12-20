#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;

        if (nums.size() == 1)
            return nums[0];

        if (nums.size() == 2)
            return max(nums[0], nums[1]);

        int prv = 0, cur = 0, len = nums.size();

        for (int i = 0; i < len; i++)
        {
            int temp = max(prv + nums[i], cur);
            prv = cur;
            cur = temp;
        }

        return cur;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 1};
    int res = obj.rob(arr);
    cout << res << endl;
    return 0;
}