#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        // put 0 item into last (from problem description, it always end at last postion+1)
        cost.push_back(0);
        int len = cost.size();

        for (int i = len - 3; i >= 0; i--)
        {
            cost[i] += min(cost[i + 1], cost[i + 2]);
        }
        return min(cost[0], cost[1]);
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << obj.minCostClimbingStairs(arr) << endl;

    return 0;
}