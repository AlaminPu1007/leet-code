#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumDifference(vector<int> &nums, int k)
    {
        int n = nums.size(), ans = INT_MAX;
        sort(nums.begin(), nums.end());

        for (int i = 0; i + k - 1 < n; i++)
            ans = min(ans, (nums[i + k - 1] - nums[i]));

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {9, 4, 1, 7};
    cout << obj.minimumDifference(arr, 2) << endl;

    return 0;
}