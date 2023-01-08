#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int len = gas.size();
        int startingIndex = 0;
        int curr_gas = 0, total_gas = 0, total_cost = 0;

        for (int i = 0; i < len; i++)
        {
            total_gas += gas[i];
            total_cost += cost[i];

            curr_gas += (gas[i] - cost[i]);

            if (curr_gas < 0)
            {
                startingIndex = i + 1;
                curr_gas = 0;
            }
        }

        return total_gas < total_cost ? -1 : startingIndex;
    }
};

int main(void)
{
    Solution obj;
    vector<int> gas = {1, 2, 3, 4, 5}, cost = {3, 4, 5, 1, 2};
    int res = obj.canCompleteCircuit(gas, cost);
    cout << res << endl;
    return 0;
}