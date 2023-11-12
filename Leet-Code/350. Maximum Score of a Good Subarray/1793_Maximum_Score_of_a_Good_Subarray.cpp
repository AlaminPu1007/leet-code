#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumScore(vector<int> &nums, int k)
    {
        int l = k, r = k, len = nums.size();
        int res = nums[k], cur_min = nums[k];

        while (l > 0 || r < len - 1)
        {
            int left = 0, right = 0;

            // for left portion
            if (l == 0)
                r++;

            else if (r == len - 1)
                l--;

            // using -1 for 0 base index system
            else if (nums[l - 1] < nums[r + 1])
                r++;
            else
                l--;

            cur_min = min(cur_min, min(nums[l], nums[r]));

            res = max(res, cur_min * (r - l + 1));
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {6569, 9667, 3148, 7698, 1622, 2194, 793, 9041, 1670, 1872};
    cout << obj.maximumScore(arr, 5) << endl;
    return 0;
}