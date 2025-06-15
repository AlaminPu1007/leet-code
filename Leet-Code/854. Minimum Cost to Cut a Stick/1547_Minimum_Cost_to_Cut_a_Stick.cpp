#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCost(int n, vector<int> &cuts)
    {
        // sort the cuts array
        sort(cuts.begin(), cuts.end());

        // insert 0 to the begining of the array
        cuts.insert(begin(cuts), 0);

        // insert last or n'th element in the array
        cuts.push_back(n);

        vector<vector<int>> dp(cuts.size(), vector<int>(cuts.size(), -1));

        return Solved(0, cuts.size() - 1, cuts, dp);
    }

private:
    int Solved(int left, int right, vector<int> &arr, vector<vector<int>> &dp)
    {
        if (right - left == 1)
            return 0;

        if (dp[left][right] != -1)
            return dp[left][right];

        int res = INT_MAX;

        for (int i = left + 1; i < right; i++)
        {
            int cost = ((arr[right] - arr[left]) +
                        // get minimum cost from left side
                        Solved(left, i, arr, dp) +
                        // get minimum cost from right side
                        Solved(i, right, arr, dp));

            // we need minimum cost from overall all cost
            res = min(res, cost);
        }

        return dp[left][right] = res;
    }
};

int main(void)
{
    Solution obj;
    int n = 7;
    vector<int> cuts = {1, 3, 4, 5};

    cout << obj.minCost(n, cuts) << endl;

    return 0;
}