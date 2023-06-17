
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        int res = 0;
        int len = nums.size();
        if (len <= 2)
            return -1;

        sort(nums.begin(), nums.end());

        return nums[1];
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 2, 1, 4};
    cout << obj.findNonMinOrMax(arr) << endl;
    return 0;
}