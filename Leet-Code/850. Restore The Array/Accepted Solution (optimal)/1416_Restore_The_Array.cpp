
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;
    int n;

public:
    int numberOfArrays(string s, int k)
    {
        n = s.size();
        vector<int> dp(n + 1, -1);
        return Solved(0, s, k, dp);
    }

private:
    int Solved(int i, string &s, int k, vector<int> &dp)
    {
        if (i >= n)
            return 1;

        if (s[i] == '0')
            return dp[i] = 0;

        if (dp[i] != -1)
            return dp[i];

        long ans = 0;
        long long num = 0;

        for (int j = i; j < n; j++)
        {
            num = (num * 10) + (s[j] - '0');

            if (num > k)
                break;

            ans = (ans % MOD + Solved(j + 1, s, k, dp) % MOD) % MOD;
        }

        return dp[i] = ans;
    }
};

int main(void)
{
    Solution obj;
    string s = "1234567890";
    int k = 90;

    cout << obj.numberOfArrays(s, k) << endl; // expected: 34

    return 0;
}