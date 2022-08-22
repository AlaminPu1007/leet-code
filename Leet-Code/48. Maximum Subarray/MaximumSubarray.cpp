#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int max = nums[0], sum = 0, len = nums.size();

        for (int i = 0; i < len; i++)
        {
            sum += nums[i];

            // get the max no of sum
            if (max < sum)
                max = sum;

            // if it is less than 0 then there is no need to build up negative sum simply make it 0
            if (sum < 0)
                sum = 0;
        }

        return max;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {-1};
    int res = obj.maxSubArray(arr);
    cout << res << endl;
    return 0;
}