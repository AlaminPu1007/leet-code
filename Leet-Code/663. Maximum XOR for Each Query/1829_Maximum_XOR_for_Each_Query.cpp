#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &nums, int maximumBit)
    {
        vector<int> res;
        int xorSum = 0;

        // get k can be, ex: pow(2, maxmumBit) - 1
        int maskBit = (1 << maximumBit) - 1;

        for (auto item : nums)
            xorSum ^= item;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            res.push_back(xorSum ^ maskBit);

            // removed item from xor sum
            // xor same to cancel out each other
            xorSum ^= nums[i];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 1, 3};
    vector<int> res = obj.getMaximumXor(arr, 2);

    for (auto item : res)
        cout << item << " ";

    return 0;
}