#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reductionOperations(vector<int> &nums)
    {
        int len = nums.size();
        sort(nums.begin(), nums.end());

        int ans = 0, count = 0;

        for (int i = 1; i < len; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                count++;
            }
            ans += count;
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {1, 1, 2, 2, 3};
    cout << obj.reductionOperations(arr) << endl;

    return 0;
}