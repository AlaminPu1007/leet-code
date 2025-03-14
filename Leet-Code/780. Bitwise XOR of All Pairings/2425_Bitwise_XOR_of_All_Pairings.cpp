#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size(), m = nums2.size();

        if (n % 2 == 0 && m % 2 == 0)
            return 0;

        int res = 0;

        if ((n % 2 == 1 && m % 2 == 0))
        {
            for (auto item : nums2)
                res ^= item;
        }

        if ((n % 2 == 0 && m % 2 == 1))
        {
            for (auto item : nums1)
                res ^= item;
        }

        if (n % 2 == 1 && m % 2 == 1)
        {
            for (auto item : nums2)
                res ^= item;

            for (auto item : nums1)
                res ^= item;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {8, 6, 29, 2, 26, 16, 15, 29}, nums2 = {24, 12, 12};

    cout << obj.xorAllNums(nums1, nums2) << endl;
    return 0;
}