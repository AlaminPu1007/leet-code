#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        int n = nums.size();
        int res = nums[0];
        int count = nums[0];

        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] < nums[i])
                count += nums[i];

            else
                count = nums[i];

            res = max(res, count);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {10, 20, 30, 5, 10, 50};

    cout << obj.maxAscendingSum(arr) << endl;

    return 0;
}