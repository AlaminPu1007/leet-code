#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string stoneGameIII(vector<int> &stoneValue)
    {
        int n = stoneValue.size();
        vector<int> dp(n + 1, -1);
        int res = Solved(0, stoneValue, n, dp);

        if (res < 0)
            return "Bob";

        else if (res > 0)
            return "Alice";

        return "Tie";
    }

private:
    int Solved(int idx, vector<int> &arr, int n, vector<int> &dp)
    {
        if (idx >= n)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int res = INT_MIN;
        int getStones = 0;

        for (int i = 0; i < 3; i++)
        {
            if (idx + i < n)
            {
                getStones += arr[idx + i];

                res = max(res, (getStones - Solved((idx + i + 1), arr, n, dp)));
            }
        }

        return dp[idx] = res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, -9};
    cout << obj.stoneGameIII(arr) << endl;

    return 0;
}