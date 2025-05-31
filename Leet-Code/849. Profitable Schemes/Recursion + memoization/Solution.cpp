/**
 * To solved this problem, we need a 0/1 knapsack approach. with memoization.
 * Accepted solution
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int profitableSchemes(int n, int minProfit, vector<int> &group, vector<int> &profit)
    {
        vector<vector<vector<int>>> dp(101, vector<vector<int>>(101, vector<int>(101, -1)));

        return Solved(0, 0, 0, n, minProfit, group, profit, dp);
    }

private:
    int Solved(int i, int noOfPeople, int totalProfit, int n, int minProfit, vector<int> &group, vector<int> &profit, vector<vector<vector<int>>> &dp)
    {
        // if exceed no of total people
        if (noOfPeople > n)
            return 0;

        if (i == group.size())
            return totalProfit >= minProfit ? 1 : 0;

        // if this sub-problem have already been solved
        if (dp[i][noOfPeople][totalProfit] != -1)
            return dp[i][noOfPeople][totalProfit];

        // if we do not take any profit
        int noTaken = Solved(i + 1, noOfPeople, totalProfit, n, minProfit, group, profit, dp) % MOD;

        // if we take current profit
        // min(totalProfit + profit[i], minProfit) -> use this to help cache current sub-problem
        int taken = Solved(i + 1, noOfPeople + group[i], min(totalProfit + profit[i], minProfit), n, minProfit, group, profit, dp) % MOD;

        return dp[i][noOfPeople][totalProfit] = (taken + noTaken) % MOD;
    }
};

int main(void)
{
    Solution obj;
    int n = 10, minProfit = 5;
    vector<int> group = {2, 3, 5}, profit = {6, 7, 8};

    cout << obj.profitableSchemes(n, minProfit, group, profit) << endl;

    return 0;
}