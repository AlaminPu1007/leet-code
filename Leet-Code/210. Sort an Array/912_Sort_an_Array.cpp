#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 1;

        // called merge sort
        mergeSort(nums, low, high);

        return nums;
    }

private:
    void mergeSort(vector<int> &nums, int low, int high)
    {
        if (low >= high)
            return;

        // to avoid an overflow
        int mid = (low + high) / 2;

        // called merge recursive method for left half
        mergeSort(nums, low, mid);
        // called merge recursive method for right half
        mergeSort(nums, mid + 1, high);

        // now merge both left and right half
        mergeMethod(nums, low, mid, high);
    }

private:
    // define merge method
    void mergeMethod(vector<int> &nums, int low, int mid, int high)
    {
        // define an temporary array
        vector<int> tempArray;

        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high)
        {
            if (nums[left] <= nums[right])
            {
                tempArray.push_back(nums[left]);
                left++;
            }
            else
            {
                tempArray.push_back(nums[right]);
                right++;
            }
        }

        // if left portion is remain, then puth it temporary
        while (left <= mid)
        {
            tempArray.push_back(nums[left]);
            left++;
        }
        // if right portion is remain, then push it temporary
        while (right <= high)
        {
            tempArray.push_back(nums[right]);
            right++;
        }

        // modify original array with tempArray
        /*
            The expression tempArray[i - low] computes the index of the corresponding element in the temporary array tempArray.
            Since the indices in the temporary array start from 0,
            we need to subtract low from i to get the correct index in tempArray.
        */
        for (int i = low; i <= high; i++)
        {
            nums[i] = tempArray[i - low];
        }
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {5, 2, 3, 1};
    vector<int> res = obj.sortArray(arr);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}