#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;

        if (n < 4)
            return -1;

        // sort the element
        sort(nums.begin(), nums.end());

        res = (nums[n - 1] * nums[n - 2]) - (nums[1] * nums[0]);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {5, 6, 2, 7, 4};
    cout << obj.maxProductDifference(arr) << endl;
    return 0;
}