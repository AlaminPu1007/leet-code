// Using extra space, accepted solution
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int len = prices.size(), res = 0;
        int makeArr[len], c = 0;
        int maxValue = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            maxValue = max(maxValue, prices[i]);
            makeArr[i] = maxValue;
        }

        for (int i = 0; i < len; i++)
        {
            res = max(res, makeArr[i] - prices[i]);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 6, 4, 3, 1};
    int res = obj.maxProfit(arr);
    cout << res << endl;
    return 0;
}
