#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        int n = nums.size();
        int res = -1;

        int minNum = nums[0];

        for (int i = 1; i < n; i++)
        {
            if (nums[i] > minNum)
                res = max(res, nums[i] - minNum);
            else
                minNum = nums[i];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 1, 5, 4};

    cout << obj.maximumDifference(arr) << endl;

    return 0;
}