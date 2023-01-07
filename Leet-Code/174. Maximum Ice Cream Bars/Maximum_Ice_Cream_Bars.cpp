#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        int len = costs.size();
        // sort array
        sort(costs.begin(), costs.end());

        // integer to denote the index of current ice cream.
        int i = 0;

        while (coins >= 0 && i < len && costs[i] <= coins)
        {
            coins -= costs[i];
            i += 1;
        }
        return i;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 2, 4, 1};
    int coins = 7;
    int res = obj.maxIceCream(arr, coins);
    cout << res << endl;
    return 0;
}