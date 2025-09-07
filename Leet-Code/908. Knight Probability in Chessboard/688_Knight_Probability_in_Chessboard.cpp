#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int del_row[8] = {-2, -2, -1, -1, +1, +2, +2, +1};
    int del_col[8] = {-1, +1, -2, +2, -2, -1, +1, +2};

public:
    double knightProbability(int n, int k, int row, int column)
    {
        unordered_map<string, double> dp;

        return Solved(n, k, row, column, dp);
    }

private:
    double Solved(int n, int k, int row, int col, unordered_map<string, double> &dp)
    {
        if (row >= n || row < 0 || col >= n || col < 0)
            return 0;

        if (k == 0)
            return 1;

        string key = to_string(k) + "_" + to_string(row) + "_" + to_string(col);

        if (dp.find(key) != dp.end())
            return dp[key];

        double res = 0;

        for (int i = 0; i < 8; i++)
        {
            int new_row = del_row[i] + row;
            int new_col = del_col[i] + col;

            res += Solved(n, k - 1, new_row, new_col, dp);
        }

        return dp[key] = (double)res / 8.0;
    }
};

int main(void)
{
    Solution obj;
    int n = 3, k = 2, row = 0, column = 0;

    cout << obj.knightProbability(n, k, row, column) << endl;

    return 0;
}