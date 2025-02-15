#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumBeauty(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int res = 0;

        int l = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            while (nums[i] - nums[l] > 2 * k)
                l++;

            res = max(res, i - l + 1);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 6, 1, 2};
    cout << obj.maximumBeauty(arr, 2) << endl;
    return 0;
}