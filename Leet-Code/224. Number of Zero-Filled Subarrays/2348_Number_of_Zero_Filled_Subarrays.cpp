#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        int len = nums.size();
        long long res = 0, count = 0;

        for (int i = 0; i < len; i++)
        {
            if (nums[i] == 0)
            {
                count++;
                res += count;
            }
            else if (count)
                count = 0;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 0, 0, 2, 0, 0};
    long long res = obj.zeroFilledSubarray(arr);
    cout << res << endl;
    return 0;
}