#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int len = nums.size();
        k %= len;

        // reverse first portion of array
        reverse(nums.begin(), nums.begin() + (len - k));
        // reverse second portion of array
        reverse(nums.begin() + (len - k), nums.end());
        // now reverse to get actual output
        reverse(nums.begin(), nums.end());
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