#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumTripletValue(vector<int> &nums)
    {
        long long n = nums.size(), res = 0;
        int left = nums[0];

        for (int i = 1; i < n; i++)
        {
            if (nums[i] > left)
            {
                left = nums[i];
                continue;
            }

            for (int j = i + 1; j < n; j++)
            {
                res = max(res, (long long)(left - nums[i]) * nums[j]);
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {12, 6, 1, 2, 7};

    cout << obj.maximumTripletValue(arr) << endl;

    return 0;
}