#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {

        vector<unsigned int> dp(target + 1);
        // there is only one way to reach 0 so we initialise it with 1
        dp[0] = 1;
        // we will traverse for each value and see in how many ways we can reach it
        for (int i = 1; i <= target; i++)
        {
            // traverse the given nums element
            for (auto x : nums)
            {
                // check if the index is in valid for dp
                if (i - x >= 0)
                {
                    // this is the main step
                    dp[i] += dp[i - x];
                    // if we have the result of in how many ways we can reach i-x then we can use it to get number of ways
                    // to get i as by adding x to i-x we will get i and thus the number of ways to reach i-x is also the number
                    // of ways to reach i.
                }
            }
        }

        return dp[target];
    }
};

int main(void)
{
    Solution obj;

    int k = 4;
    vector<int> arr = {1, 2, 3};

    int ans = obj.combinationSum4(arr, k);

    cout << "ans is : " << ans << endl;

    return 0;
}