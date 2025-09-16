#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numSubseq(vector<int> &nums, int target)
    {
        int n = nums.size();
        int res = 0;
        int right = n - 1;

        // sor the array
        sort(nums.begin(), nums.end());

        vector<int> preComputePow(n + 1, 1);

        for (int i = 1; i <= n; i++)
            preComputePow[i] = (preComputePow[i - 1] * 2) % MOD;

        for (int i = 0; i < n && i <= right; i++)
        {
            // removed invalid item as much as possible
            while (i <= right && nums[i] + nums[right] > target)
                right--;

            // if we get valid sub-sequences
            if (i <= right)
                res = (res + preComputePow[right - i]) % MOD;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 5, 6, 7};
    cout << obj.numSubseq(arr, 9) << endl;

    return 0;
}