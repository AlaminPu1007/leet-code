#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        int count = 0, len = nums.size();
        // sort an array-- complexity of sort is taken O(n log(n))
        sort(nums.begin(), nums.end());
        map<int, int> Map;

        for (int i = 0; i < len; i++)
        {
            auto item = Map.find(nums[i] - k);
            if (item != Map.end())
                count += Map[nums[i] - k];

            Map[nums[i]]++;
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 2, 1};
    obj.countKDifference(arr, 1);

    return 0;
}