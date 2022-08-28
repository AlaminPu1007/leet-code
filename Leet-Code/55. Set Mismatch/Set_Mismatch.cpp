#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int len = nums.size(), sum = 0;
        vector<int> result;

        map<int, int> Map;

        for (int i = 0; i < len; i++)
        {
            auto item = Map.find(nums[i]);

            if (item != Map.end())
            {
                result.push_back(nums[i]);
            }
            else
            {
                sum += nums[i];
                Map[nums[i]]++;
            }
        }

        result.push_back((len * (len + 1) / 2) - sum);
        return result;
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {1, 2, 2, 4};

    obj.findErrorNums(arr);
    return 0;
}