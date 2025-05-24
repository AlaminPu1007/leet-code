#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestNiceSubarray(vector<int> &nums)
    {
        int n = nums.size();
        int res = 1, cur_sum = 0;
        int left = 0;

        for (int right = 0; right < n; right++)
        {

            while ((cur_sum & nums[right]) != 0)
            {
                /**
                 * we want to removed nums[left] number from our current window
                 * ex: cur_sum =>                0 0 1 0 1 1
                 * nums[left] = nums[0] = 1   => 0 0 0 0 0 1
                 * after removing the cur_sum => 0 0 1 0 1 0
                 */
                cur_sum ^= nums[left];
                left++;
            }

            // add current number with cur_sum
            cur_sum |= nums[right];

            res = max(res, right - left + 1);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {338970160, 525086042, 19212931, 213753017, 321613307, 553272419, 190837185, 548628106, 793546945, 243936947};

    cout << obj.longestNiceSubarray(arr) << endl;

    return 0;
}