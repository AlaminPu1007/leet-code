#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canSortArray(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (n - i - 1); j++)
            {
                // if they are already sorted
                if (nums[j] <= nums[j + 1])
                    continue;

                // check both has a same no of set bits
                if (CountBits(nums[j]) == CountBits(nums[j + 1]))
                {
                    // perform a swap operation
                    swap(nums[j], nums[j + 1]);
                }
                // there is no possible way to sort the array
                else
                    return false;
            }
        }

        return true;
    }

private:
    int CountBits(int num)
    {
        int res = 0;

        while (num)
        {
            res += num & 1;
            num >>= 1;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {8, 4, 2, 30, 15};
    cout << obj.canSortArray(arr) << endl;
    return 0;
}