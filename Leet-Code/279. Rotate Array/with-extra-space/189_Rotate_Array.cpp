#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int len = nums.size();
        vector<int> copyArr(nums.begin(), nums.end());

        for (int i = 0; i < len; i++)
        {
            int pos = (i + k) % len;
            nums[pos] = copyArr[i];
        }
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    obj.rotate(arr, k);
    return 0;
}