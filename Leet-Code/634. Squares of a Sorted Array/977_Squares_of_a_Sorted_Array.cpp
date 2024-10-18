#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i] * nums[i];
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> res = obj.sortedSquares(nums);
    for (auto item : res)
        cout << item << " ";
    return 0;
}