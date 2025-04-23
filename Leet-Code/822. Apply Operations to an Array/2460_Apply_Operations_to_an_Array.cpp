#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        int count = 0;

        for (auto item : nums)
            if (item != 0)
                nums[count++] = item;

        while (count < n)
            nums[count++] = 0;

        return nums;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 2, 1, 1, 0};
    vector<int> res = obj.applyOperations(arr);

    for (auto item : res)
        cout << item << " ";

    return 0;
}