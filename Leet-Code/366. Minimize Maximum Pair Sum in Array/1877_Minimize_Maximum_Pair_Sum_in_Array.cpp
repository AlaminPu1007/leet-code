#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        int len = nums.size();
        int res = 0;
        int right = len - 1;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < len / 2; i++)
        {
            int pairSum = nums[i] + nums[right];
            res = max(res, pairSum);
            right--;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 5, 4, 2, 4, 6};
    cout << obj.minPairSum(arr) << endl;
    return 0;
}