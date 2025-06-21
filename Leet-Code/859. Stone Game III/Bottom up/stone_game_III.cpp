#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string stoneGameIII(vector<int> &stoneValue)
    {
        int n = stoneValue.size();
        vector<int> dp(n + 1, INT_MIN);
        dp[n] = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            int getStones = 0;

            for (int j = 0; j < 3; j++)
            {
                if (i + j < n)
                {
                    getStones += stoneValue[i + j];
                    dp[i] = max(dp[i], getStones - dp[(i + j + 1)]);
                }
            }
        }

        int res = dp[0];

        if (res < 0)
            return "Bob";

        else if (res > 0)
            return "Alice";

        return "Tie";
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, -9};
    cout << obj.stoneGameIII(arr) << endl;

    return 0;
}