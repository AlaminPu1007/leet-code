/**
 * (Using Simple Recursion + Memo) - Knapsack variant, (0/1) Knapsack
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long mostPoints(vector<vector<int>> &questions)
    {
        int n = questions.size();
        vector<long long> dp(n + 1, -1);

        return Solved(0, questions, dp);
    }

private:
    long long Solved(int i, vector<vector<int>> &questions, vector<long long> &dp)
    {
        if (i >= questions.size())
            return 0;

        if (dp[i] != -1)
            return dp[i];

        // if we choose current elements
        long long taken = questions[i][0] + Solved((i + questions[i][1] + 1), questions, dp);

        // if we skip current element
        long long notTaken = Solved(i + 1, questions, dp);

        // return maximum result
        return dp[i] = max(taken, notTaken);
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{3, 2}, {4, 3}, {4, 4}, {2, 5}};

    cout << obj.mostPoints(arr) << endl;

    return 0;
}