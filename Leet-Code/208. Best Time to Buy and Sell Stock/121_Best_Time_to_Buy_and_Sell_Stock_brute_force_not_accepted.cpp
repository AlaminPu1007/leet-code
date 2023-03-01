// Time Limit Exceeded
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int len = prices.size(), res = 0;

        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (prices[i] < prices[j])
                {
                    int value = prices[j] - prices[i];
                    res = max(res, value);
                }
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int res = obj.maxProfit(arr);
    cout << res << endl;
    return 0;
}
