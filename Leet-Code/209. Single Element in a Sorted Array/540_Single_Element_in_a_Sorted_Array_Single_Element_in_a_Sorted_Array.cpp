#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int r = nums.size() - 1, l = 0;

        // check all boundary, for possible answer
        if (r == 0 || nums[0] != nums[1])
        {
            return nums[0];
        }
        else if (nums[r] != nums[r - 1])
            return nums[r];

        while (l <= r)
        {
            int mid = l + ((r - l) / 2);

            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }
            // mid is even and mid+1 is same element, or  mid is odd and mid-1 is same element then we need to update l by m+1
            else if ((mid % 2 == 1 && nums[mid - 1] == nums[mid]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
            {
                l = mid + 1;
            }
            // element is present right side
            else
                r = mid - 1;
        }
        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int res = obj.singleNonDuplicate(arr);
    cout << res << endl;
    return 0;
}