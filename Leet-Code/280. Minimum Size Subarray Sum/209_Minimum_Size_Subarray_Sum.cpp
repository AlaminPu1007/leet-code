#include <bits/stdc++.h>
using namespace std;

// [Learn subarray problem](https://leetcode.com/explore/featured/card/leetcodes-interview-crash-course-data-structures-and-algorithms/703/arraystrings/4502/)
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int len = nums.size();
        int left = 0;
        // we need an minimum answer, that's the reason to initialize res with int-max element
        int res = INT_MAX, sumOfElements = 0;

        for (int right = 0; right < len; right++)
        {
            sumOfElements += nums[right];

            while (sumOfElements >= target)
            {
                // get no of elements
                res = min(res, right - left + 1);
                sumOfElements -= nums[left++];
            }
        }

        return res == INT_MAX ? 0 : res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    cout << obj.minSubArrayLen(7, arr) << endl;
    return 0;
}