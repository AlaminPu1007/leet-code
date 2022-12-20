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

        int len = nums.size();
        int a = 0, b = 0;

        for (int i = 0; i < len; i++)
        {
            if (i % 2 == 0)
                a = max(a + nums[i], b);

            else
                b = max(a, b + nums[i]);
        }

        return max(a, b);
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