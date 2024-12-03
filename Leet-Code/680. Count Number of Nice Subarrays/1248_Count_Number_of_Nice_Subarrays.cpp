#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        int res = 0, sum = 0;
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1;

        for (int i = 0; i < n; i++)
        {
            sum += (nums[i] % 2);
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
    vector<int> nums = {1, 1, 2, 1, 1};
    int k = 3;
    cout << obj.numberOfSubarrays(nums, k) << endl;
    return 0;
}