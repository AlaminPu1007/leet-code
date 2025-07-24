#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubarrays(vector<int> &nums)
    {
        int res = 0;
        int n = nums.size(), l = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] == (nums[i - 1] + nums[i + 1]) * 2)
                res++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 1, 4, 1};

    cout << obj.countSubarrays(arr) << endl;

    return 0;
}