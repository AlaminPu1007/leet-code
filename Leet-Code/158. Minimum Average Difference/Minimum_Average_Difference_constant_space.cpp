#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumAverageDifference(vector<int> &nums)
    {

        int len = nums.size();
        int ans = -1;
        int maxValue = INT_MAX;

        long long currPrefixSum = 0;

        long long totalSum = 0;

        for (int i = 0; i < len; i++)
            totalSum += nums[i];

        long long int leftSum = 0;

        for (int index = 0; index < len; index++)
        {
            currPrefixSum += nums[index];

            long long int leftAvg = currPrefixSum;
            leftAvg /= (index + 1);

            long long int rightAvg = (totalSum - currPrefixSum);

            if (index != (len - 1))
            {
                rightAvg /= (len - index - 1);
            }

            long long int currentSum = int(abs(rightAvg - leftAvg));
            if (currentSum < maxValue)
            {
                maxValue = currentSum;
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
