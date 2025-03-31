#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        int n = nums.size();
        int res = 1;
        int incOrder = 1, decOrder = 1;

        for (int i = 0; i < n - 1; i++)
        {
            // for inc-order
            if (nums[i + 1] > nums[i])
            {
                incOrder += 1;
                decOrder = 1;
            }

            // for dec-order
            else if (nums[i + 1] < nums[i])
            {
                incOrder = 1;
                decOrder += 1;
            }
            // both are equal case reset everything
            else
            {
                incOrder = 1, decOrder = 1;
            }

            res = max({res, incOrder, decOrder});
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 4, 3, 3, 2};

    cout << obj.longestMonotonicSubarray(arr) << endl;

    return 0;
}