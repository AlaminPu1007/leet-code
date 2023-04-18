#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = (right + left) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
                left = mid + 1;
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int t = 9;
    int res = obj.search(arr, t);
    cout << res << endl;
    return 0;
}