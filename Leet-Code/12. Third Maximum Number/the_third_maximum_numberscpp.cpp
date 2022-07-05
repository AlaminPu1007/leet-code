#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {

        long long count = 1, value = 0, len = nums.size(), max = 0, i, j = 0;
        // sort in reverse order
        sort(nums.begin(), nums.end(), greater<int>());

        // removed duplicate value
        for (i = 1; i < len; i++)
        {
            if (nums[i] < nums[i - 1])
                count++;
            if (count == 3)
            {
                return nums[i];
            }
        };

        return nums[0];
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3};
    int res = obj.thirdMax(arr);
    cout << res << endl;
    return 0;
}
