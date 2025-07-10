#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();

        if (n == 0)
            return -1;

        if (n == 1 && nums[0] != target)
            return -1;

        // find minimum item index from given array
        int min_idx = BSToFindMinimumItemIdx(nums);

        if (min_idx == -1)
            return min_idx;

        int left_portion = BinarySearch(nums, target, 0, min_idx - 1);
        int right_portion = BinarySearch(nums, target, min_idx, n - 1);

        return max({left_portion, right_portion});
    }

private:
    int BinarySearch(vector<int> &nums, int target, int start, int end)
    {
        int n = nums.size();

        while (start <= end)
        {
            int mid = start + ((end - start) / 2);

            if (nums[mid] == target)
                return mid;

            if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        return -1;
    }

private:
    int BSToFindMinimumItemIdx(vector<int> &nums)
    {
        int n = nums.size();
        int start = 0, end = n - 1;

        while (start <= end)
        {
            int mid = start + ((end - start) / 2);

            // we have to find out next and previous item of mid
            int next_item = (mid + 1) % n;
            int prv_item = (mid + n - 1) % n;

            if ((nums[next_item] >= nums[mid]) && (nums[prv_item] >= nums[mid]))
                return mid;

            else if (nums[mid] > nums[end])
                start = mid + 1;

            else
                end = mid - 1;
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    cout << obj.search(arr, 2) << endl;

    return 0;
}