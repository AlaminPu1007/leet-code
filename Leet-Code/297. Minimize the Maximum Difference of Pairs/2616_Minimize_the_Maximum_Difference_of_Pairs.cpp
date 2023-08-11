#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimizeMax(vector<int> &nums, int p)
    {
        int n = nums.size();

        if (n <= 1)
            return 0;

        // sort root array. whenever we need minimum solution, we need always data as a sorting or ascending order
        sort(nums.begin(), nums.end());

        int left = 0;
        // how do we get left value.
        // the left value we get the possible maximum threshold would be the most larger value from the array
        int right = nums[n - 1];

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            // If there are enough pairs, look for a smaller threshold.
            // Otherwise, look for a larger threshold.
            if (calculatesMinimizeValue(mid, nums, p))
            {
                right = mid;
            }
            else
                left = mid + 1;
        }

        return left;
    }

private:
    bool calculatesMinimizeValue(int value, vector<int> &nums, int p)
    {
        int pairs = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] - nums[i - 1] <= value)
            {
                pairs++;
                i++;
            }
            if (pairs >= p)
                return true;
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {10, 1, 2, 7, 1, 3};
    int p = 2;

    cout << obj.minimizeMax(arr, p) << endl;
    return 0;
}