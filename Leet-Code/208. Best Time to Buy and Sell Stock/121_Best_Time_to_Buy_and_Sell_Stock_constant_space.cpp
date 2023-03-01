// Using extra space, accepted solution
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int len = prices.size(), res = 0;
        int minValue = INT_MAX;

        for (int i = 0; i < len; i++)
        {
            minValue = min(minValue, prices[i]);
            res = max(res, prices[i] - minValue);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 6, 5, 3, 1, 4};
    int res = obj.maxProfit(arr);
    cout << res << endl;
    return 0;
}
