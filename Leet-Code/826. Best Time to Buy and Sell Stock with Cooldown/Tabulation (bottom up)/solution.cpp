
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();

        if (n == 0 || n == 1)
            return 0;

        vector<int> t(n, 0);

        // for 0'th day, there is no possible way to make profit
        t[0] = 0;

        // for 1'th day, get the maximum profit
        t[1] = max({prices[1] - prices[0], 0});

        /*
           Let's analyse ith day, i.e. t[i] :
           i-th day can be :
           - BUY DAY   -> NO, because why would someone buy on last day

           - COOL DOWN -> YES, in that case, max-profit will be previous day profit (t[i] = t[i-1])

           - SELL DAY  -> If we choose to sell today, We will have to select the best buy day from j = 0 to j = (i-1)
                         So, profit = prices[j] - prices[i]; //i.e. we bought on day-j and sell on day-i
                         But, what about previous-profit of j i.e. t[j]. We need to consider that as well to find whole
                         maximum profit.
                         So, for that let's look previously to j :
                         Look at (j-1) -> It can't be buy-day, because we are already buying on jth day
                                       -> It can't be sell-day because, after you sell your stock on (j-1)th day, you cannot buy stock on the next day i.e. (jth) day (i.e., cooldown one day).
                                       -> It can only be cool-down day. max profit till (j-1)th day will be
                                           equal to its previous profit i.e. t[j-2]

                       So, profit at day i = prices[j] - prices[i] + t[j-2];

       */
        for (int i = 2; i < n; i++)
        {
            // keep previous value as a result
            // initially it dont have any valid result
            t[i] = t[i - 1]; // cool down

            // j could be at most i-1
            for (int j = 0; j < i; j++)
            {
                int previousProfit = j > 1 ? t[j - 2] : 0;
                t[i] = max({t[i], prices[i] - prices[j] + previousProfit});
            }
        }

        // return maximum of n-1 th days profit
        return t[n - 1];
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 0, 2};

    cout << obj.maxProfit(arr) << endl;

    return 0;
}