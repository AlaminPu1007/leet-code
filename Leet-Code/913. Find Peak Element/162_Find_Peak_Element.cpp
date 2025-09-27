#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, high = n - 1;

        if (n == 1)
            return 0;

        while (low <= high)
        {
            int mid = low + ((high - low) / 2);

            if (mid > 0 && mid < n - 1)
            {
                // check current element is peak element or not
                if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                    return mid;

                // if mid + 1 is greater than mid, then possible to the answer lies right side of the mid
                if (nums[mid + 1] > nums[mid])
                    low = mid + 1;

                else
                    high = mid - 1;
            }

            if (mid == 0)
            {
                if (nums[0] > nums[1])
                    return 0;
                else
                    return 1;
            }

            if (mid == n - 1)
            {
                if (nums[n - 1] > nums[n - 2])
                    return n - 1;
                else
                    return n - 2;
            }
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};

    cout << obj.findPeakElement(arr) << endl;

    return 0;
}