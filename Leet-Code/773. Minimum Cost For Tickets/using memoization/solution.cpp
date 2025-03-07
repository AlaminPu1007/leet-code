
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        vector<int> dp(366, -1);
        return DFS(0, days, costs, dp);
    }

private:
    int DFS(int idx, vector<int> &days, vector<int> &costs, vector<int> &dp)
    {
        if (idx >= days.size())
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int one_days = costs[0] + DFS(idx + 1, days, costs, dp);

        int max_days = days[idx] + 7;
        int j = 0;

        while (j < days.size() && days[j] < max_days)
            j++;

        int seven_days = costs[1] + DFS(j, days, costs, dp);

        max_days = days[idx] + 30;
        j = 0;

        while (j < days.size() && days[j] < max_days)
            j++;

        int thirty_days = costs[2] + DFS(j, days, costs, dp);

        return dp[idx] = min(one_days, min(seven_days, thirty_days));
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 4, 6, 7, 8, 20};
    vector<int> costs = {2, 7, 15};

    cout << obj.mincostTickets(arr, costs) << endl;

    return 0;
}