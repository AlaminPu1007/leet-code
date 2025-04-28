/*
    A recursive with memoization approach is implemented for this given problem.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, -1));

        // initially the buy flag is true
        // always need to buy first item
        return Solve(0, prices, n, true, dp);
    }

private:
    int Solve(int i, vector<int> &prices, int n, int isBuy, vector<vector<int>> &dp)
    {
        if (i >= n)
            return 0;

        if (dp[i][isBuy] != -1)
            return dp[i][isBuy];

        int profit = 0;

        if (isBuy)
        {
            // if buy at i'th day, then move to next day
            int buy = Solve(i + 1, prices, n, false, dp) - prices[i];

            // if did not but at i'th day, the try to move next day
            // and mark buy flag true, cause we did not buy anything at that day
            int notBuy = Solve(i + 1, prices, n, true, dp);

            // try to get max-profit as much as possible
            profit = max({profit, buy, notBuy});
        }
        // cell the item's
        else
        {

            // if we cell item at i'th day, then mark buy flag true
            // and cool down for one day. (from problem description)
            int cell = prices[i] + Solve(i + 2, prices, n, true, dp);

            // if we not cell at i'th day, then try to cell this next day
            // and mark buy flag false, cause we wouldn't able to buy before cell the item
            int notCell = Solve(i + 1, prices, n, false, dp);

            // try to get max-profit as much as possible
            profit = max({profit, cell, notCell});
        }

        return dp[i][isBuy] = profit;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 0, 2};

    cout << obj.maxProfit(arr) << endl;

    return 0;
}