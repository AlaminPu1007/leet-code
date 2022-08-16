/*
This solution taking the time complexity O(n),
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int len = nums.size();

        for (int i = 0; i < len; i++)
        {
            if (nums[i] == target || target < nums[i])
                return i;
        }

        return len;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 5, 6};
    int res = obj.searchInsert(arr, 2);
    cout << res << endl;
    return 0;
}