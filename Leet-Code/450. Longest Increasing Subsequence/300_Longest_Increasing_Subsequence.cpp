#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;
        // initialize with 1,(ex: for every single element in nums, can have possible 1 increasing value)
        vector<int> dp(n, 1);

        // bottomup approach,(calculate result from backward)
        for (int i = n - 1; i >= 0; i--)
        {
            // we calculate from current item (`i + 1`) to (`nums - 1`) last element
            for (int j = i + 1; j < n; j++)
            {
                // only care about small value
                if (nums[i] < nums[j])
                    dp[i] = max(dp[i], 1 + dp[j]);
            }
        }

        for (auto item : dp)
            res = max(res, item);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 7, 7, 7, 7, 7, 7};
    cout << obj.lengthOfLIS(arr) << endl;
    return 0;
}