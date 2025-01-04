#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int M = 1e9 + 7;

public:
    int countGoodStrings(int low, int high, int zero, int one)
    {
        unordered_map<int, int> dp;
        return DFS(0, low, high, zero, one, dp);
    }

private:
    int DFS(int length, int low, int high, int zero, int one, unordered_map<int, int> &dp)
    {
        // handle the base case
        if (length > high)
            return 0;

        // serve from the cache
        if (dp.find(length) != dp.end())
            return dp[length];

        int res = length >= low ? 1 : 0;

        res += DFS(length + zero, low, high, zero, one, dp) + DFS(length + one, low, high, zero, one, dp);

        return dp[length] = res % M;
    }
};

int main(void)
{
    Solution obj;
    int low = 2, high = 3, zero = 1, one = 2;
    cout << obj.countGoodStrings(low, high, zero, one);

    return 0;
}