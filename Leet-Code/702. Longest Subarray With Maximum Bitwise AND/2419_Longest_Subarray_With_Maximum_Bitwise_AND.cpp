#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int res = 0, count = 0;
        int target = *max_element(nums.begin(), nums.end());

        for (auto item : nums)
        {
            if (target == item)
                count++;
            else
                count = 0;
            res = max(res, count);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 3, 2, 2};
    cout << obj.longestSubarray(arr) << endl;
    return 0;
}