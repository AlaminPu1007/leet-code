#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int len = nums.size();
        int N_sum = (len * (len + 1)) / 2, sum = 0;

        for (int i = 0; i < len; i++)
            sum += nums[i];

        return abs(N_sum - sum);
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int res = obj.missingNumber(arr);

    cout << res << endl;

    return 0;
}