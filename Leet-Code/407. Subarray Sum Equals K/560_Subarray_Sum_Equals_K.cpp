#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int res = 0, sum = 0;

        unordered_map<int, int> prefixSum;
        // mark prefix sum of `0` as 1
        prefixSum[0] = 1;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            int value = (sum - k);

            if (prefixSum.find(value) != prefixSum.end())
                res += prefixSum[value];

            prefixSum[sum]++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 3};
    cout << obj.subarraySum(arr, 3);
    return 0;
}