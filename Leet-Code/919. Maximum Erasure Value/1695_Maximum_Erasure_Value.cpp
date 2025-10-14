#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int n = nums.size(), sum = 0, l = 0;
        unordered_map<int, int> Map;
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            while (l < n && Map.find(nums[i]) != Map.end())
            {
                // now shrink the window
                sum -= nums[l];

                if (Map.find(nums[l]) != Map.end())
                {
                    // removed this element from map
                    Map.erase(nums[l]);
                }

                l++;
            }

            // put current item into map
            Map[nums[i]]++;

            res = max(sum, res);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {5, 2, 1, 2, 5, 2, 1, 2, 5};
    cout << obj.maximumUniqueSubarray(arr) << endl;

    return 0;
}