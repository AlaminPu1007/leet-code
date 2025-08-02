#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int countRoutes(vector<int> &locations, int start, int finish, int fuel)
    {
        int n = locations.size();
        vector<vector<int>> dp(n + 1, vector<int>(201, -1));
        return Solved(start, finish, fuel, locations, dp);
    }

private:
    int Solved(int i, int finish, int fuel, vector<int> &arr, vector<vector<int>> &dp)
    {
        // handle base case
        if (fuel < 0)
            return 0;

        if (dp[i][fuel] != -1)
            return dp[i][fuel];

        int ans = (i == finish) ? 1 : 0;

        for (int j = 0; j < arr.size(); j++)
        {
            if (i == j)
                continue;

            int remaining_fuel = fuel - abs(arr[i] - arr[j]);

            ans = (ans + Solved(j, finish, remaining_fuel, arr, dp)) % MOD;
        }

        return dp[i][fuel] = ans % MOD;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 6, 8, 4};
    int start = 1, finish = 3, fuel = 5;

    cout << obj.countRoutes(arr, start, finish, fuel) << endl;

    return 0;
}