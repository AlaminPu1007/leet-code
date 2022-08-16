/*
This solution taking the time complexity O(log(n)),
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return low;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 5, 6};
    int res = obj.searchInsert(arr, 3);
    cout << res << endl;
    return 0;
}