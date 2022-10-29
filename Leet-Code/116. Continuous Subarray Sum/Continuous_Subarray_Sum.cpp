#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        map<int, int> Map;
        int len = nums.size(), sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum += nums[i];
            sum %= k;

            if (sum == 0 && i)
                return true;

            // check sum is already exist in hash-table or not
            //  Found the required prefix sum
            if (Map.find(sum) != Map.end())
            {
                // check if atleast 2 elements are there or not
                if (i - Map[sum] > 1)
                    return true;
            }
            else
                Map[sum] = i;
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {23, 2, 4, 6, 7};
    bool res = obj.checkSubarraySum(arr, 6);
    cout << res << endl;
    return 0;
}