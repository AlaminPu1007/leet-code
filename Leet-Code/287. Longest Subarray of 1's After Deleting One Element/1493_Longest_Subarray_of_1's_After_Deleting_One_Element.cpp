#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int res = 0, noOfZero = 0, start = 0, len = nums.size();

        for (int i = 0; i < len; i++)
        {
            // counter no of zero is in given element
            noOfZero += (nums[i] == 0);

            // cout << "noOfZero -> " << noOfZero << ", ";

            // if zero count is exceed 1, we need to update zeroCount to less than or equal to `1`
            while (noOfZero > 1)
            {
                noOfZero -= (nums[start] == 0);

                // update start variable
                start++;
            }

            // cout << "i -> " << i << ", ";

            // cout << "start -> " << start << ", ";

            res = max(res, i - start);

            // cout << "res -> " << res << endl;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 1, 1, 0, 1, 1, 0, 1};
    cout << obj.longestSubarray(arr) << endl;
    return 0;
}