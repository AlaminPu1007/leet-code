#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int res = 0;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i] == 0)
            {
                res++;
                // flip 3 sub-array
                flipNum(nums, i);
                flipNum(nums, i + 1);
                flipNum(nums, i + 2);
            }
        }

        if (nums[n - 1] == 0 || nums[n - 2] == 0)
            return -1;

        return res;
    }

    void flipNum(vector<int> &nums, int i)
    {
        if (nums[i] == 0)
            nums[i] = 1;
        else
            nums[i] = 0;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 1, 1, 0, 0};

    cout << obj.minOperations(arr) << endl;

    return 0;
}