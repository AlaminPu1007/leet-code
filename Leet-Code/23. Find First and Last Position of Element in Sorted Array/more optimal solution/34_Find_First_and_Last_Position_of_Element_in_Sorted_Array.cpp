#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int left = BSAlgorithm(nums, target, true);
        int right = BSAlgorithm(nums, target, false);
        return {left, right};
    }

private:
    // if left-bias is active, we will search for left most value
    int BSAlgorithm(vector<int> &arr, int target, bool isSearchForLeftMostValue)
    {
        int i = -1;
        int left = 0, right = arr.size() - 1;

        while (left <= right)
        {
            int mid = (right + left) / 2;

            cout << mid << " " << arr[mid] << endl;

            if (target == arr[mid])
            {
                i = mid;
                if (isSearchForLeftMostValue)

                    right = mid - 1;

                else
                    left = mid + 1;
            }
            else if (arr[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return i;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    vector<int> res = obj.searchRange(nums, 8);
    for (auto it : res)
        cout << it << " ";
    return 0;
}