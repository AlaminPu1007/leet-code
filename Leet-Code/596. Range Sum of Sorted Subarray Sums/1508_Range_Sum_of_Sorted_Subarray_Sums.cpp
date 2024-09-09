#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        int MOD = 1e9 + 7;
        vector<int> subArray;

        for (int i = 0; i < n; i++)
        {
            int curSum = 0;
            for (int j = i; j < n; j++)
            {
                curSum += nums[j];

                subArray.push_back(curSum);
            }
        }

        sort(subArray.begin(), subArray.end());

        int res = 0;

        for (int i = left - 1; i < right; i++)
            res = (res + subArray[i]) % MOD;

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {1, 2, 3, 4};
    int n = 4, left = 1, right = 5;
    cout << obj.rangeSum(nums, n, left, right) << endl;
    return 0;
}