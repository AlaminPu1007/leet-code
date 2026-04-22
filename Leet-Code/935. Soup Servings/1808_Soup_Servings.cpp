#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<pair<int, int>> serving = {{100, 0}, {75, 25}, {50, 50}, {25, 75}};

public:
    double soupServings(int n)
    {

        if (n >= 5000)
            return 1.0;

        vector<vector<double>> dp(n + 1, vector<double>(n + 1, -1.0));

        return Solve(n, n, dp);
    }

private:
    double Solve(int a, int b, vector<vector<double>> &dp)
    {

        if (a <= 0 && b <= 0)
            return 0.5;

        if (a <= 0)
            return 1.0;

        if (b <= 0)
            return 0.0;

        if (dp[a][b] != -1.0)
            return dp[a][b];

        double res = 0.0;

        for (auto item : serving)
        {
            double serving_a = item.first, serving_b = item.second;

            res += 0.25 * Solve(a - serving_a, b - serving_b, dp);
        }

        return dp[a][b] = res;
    }
};

int main(void)
{
    Solution obj;

    cout << obj.soupServings(100) << endl;

    return 0;
}