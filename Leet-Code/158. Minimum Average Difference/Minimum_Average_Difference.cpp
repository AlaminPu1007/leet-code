/**
 * This is not optimal approach
 * This solution is not accepted due to timelimit-error
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumAverageDifference(vector<int> &nums)
    {
        int len = nums.size();
        int ans = 0;
        int minValue = INT_MAX;

        for (int index = 0; index < len; index++)
        {
            long long leftAvgValue = 0;
            for (int i = 0; i <= index; i++)
            {
                leftAvgValue += nums[i];
            }

            leftAvgValue /= (index + 1);

            // get right part average value
            long long rightAvgValue = 0;
            for (int j = index + 1; j < len; j++)
            {
                rightAvgValue += nums[j];
            }

            // If right part have 0 elements, then we don't divide by 0.
            if (index != (len - 1))
            {
                rightAvgValue /= (len - index - 1);
            }

            int currentValue = abs(leftAvgValue - rightAvgValue);

            if (minValue > currentValue)
            {
                minValue = currentValue;
                ans = index;
            }
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 5, 3, 9, 5, 3};
    int res = obj.minimumAverageDifference(arr);
    cout << res << endl;
    return 0;
}
