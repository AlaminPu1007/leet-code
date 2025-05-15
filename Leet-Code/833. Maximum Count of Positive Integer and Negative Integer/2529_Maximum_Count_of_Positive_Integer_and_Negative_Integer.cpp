#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;
        int negativeLength = lowerBound(nums);
        int positiveLength = n - upperBound(nums);

        return max(positiveLength, negativeLength);
    }

private:
    // Return the first index where the value is equal to or greater than zero.
    int lowerBound(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = (high + low) / 2;

            if (nums[mid] < 0)
            {
                low = mid + 1;
            }
            else if (nums[mid] >= 0)
            {
                high = mid - 1;
                n = mid;
            }
        }

        return n;
    }

private:
    // Return the first index where the value is greater than zero.
    int upperBound(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = (high + low) / 2;

            if (nums[mid] <= 0)
            {
                low = mid + 1;
            }
            else if (nums[mid] > 0)
            {
                high = mid - 1;
                n = mid;
            }
        }
        return n;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {-3, -2, -1, 0, 0, 1, 2};

    cout << obj.maximumCount(arr) << endl;

    return 0;
}