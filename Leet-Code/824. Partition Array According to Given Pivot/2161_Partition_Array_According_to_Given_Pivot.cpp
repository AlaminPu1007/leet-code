#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        int n = nums.size();
        vector<int> res(n);

        int less = 0, greater = n - 1;

        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            if (nums[i] < pivot)
                res[less++] = nums[i];

            if (nums[j] > pivot)
                res[greater--] = nums[j];
        }

        while (less <= greater)
            res[less++] = pivot;

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;

    vector<int> res = obj.pivotArray(nums, 10);

    for (auto item : res)
        cout << item << " ";

    return 0;
}