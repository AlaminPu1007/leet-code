#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countGood(vector<int> &nums, int k)
    {
        int n = nums.size(), left = 0;
        long long res = 0;
        int countPairs = 0;
        unordered_map<int, int> Map;

        for (int i = 0; i < n; i++)
        {
            // if we have seen this number before, then try to count no of valid good pairs
            countPairs += Map[nums[i]];

            // add current num into map
            Map[nums[i]]++;

            while (countPairs >= k)
            {
                res += (long long)(n - i);
                Map[nums[left]]--;

                // reduce good pairs count after shrink the window
                countPairs -= Map[nums[left]];

                // move to next index
                left++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 1, 4, 3, 2, 2, 4};
    cout << obj.countGood(arr, 2) << endl;

    return 0;
}