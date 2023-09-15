#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0, n = prices.size();
        for (int i = 1; i < n; i++)

            if (prices[i] > prices[i - 1])
                maxProfit += prices[i] - prices[i - 1];
        return maxProfit;
    }
};

int main(void)
{
    Solution obj;
    vector<int> prices = {7,6,4,3,1};
    cout << obj.maxProfit(prices) << endl;
    return 0;
}