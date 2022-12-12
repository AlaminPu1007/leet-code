#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumAverageDifference(vector<int> &nums)
    {
        int len = nums.size();
        int ans = -1;
        int minValue = INT_MAX;

        vector<long long> prefix(len + 1);
        vector<long long> suffix(len + 1);

        for (int i = 0; i < len; i++)
        {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        for (int i = (len - 1); i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] + nums[i];
        }

        for (int index = 0; index < len; index++)
        {
            // Calculate average of left part of array, index 0 to i.
            long long leftAvgValue = prefix[index + 1];

            leftAvgValue /= (index + 1);

            // get right part average value
            long long rightAvgValue = suffix[index + 1];

            // If right part have 0 elements, then we don't divide by 0.
            if (index != (len - 1))
            {
                rightAvgValue /= (len - index - 1);
            }

            int currentValue = int(abs(leftAvgValue - rightAvgValue));

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
