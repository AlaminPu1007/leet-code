#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countFairPairs(vector<int> &nums, int lower, int upper)
    {
        long long res = 0, n = nums.size();

        // we need to sort the array
        sort(nums.begin(), nums.end());

        // sort the array, to get the in ascending order
        // we need to perform a binary search algorithm on it

        for (int i = 0; i < n; i++)
        {
            // the minimum number we have required at least
            int low_b = (lower - nums[i]);

            // the maximum number we have required and find out it
            int up_b = (upper - nums[i]);

            res += (long long)(binary_search(i + 1, n - 1, up_b + 1, nums) - binary_search(i + 1, n - 1, low_b, nums));
        }

        return res;
    }

private:
    int binary_search(int l, int r, int target, vector<int> &nums)
    {
        while (l <= r)
        {
            int mid = (r + l) / 2;

            if (nums[mid] >= target)
                r = mid - 1;

            else
                l = mid + 1;
        }

        return r;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 7, 4, 4, 5};

    cout << obj.countFairPairs(arr, 3, 6) << endl;

    return 0;
}