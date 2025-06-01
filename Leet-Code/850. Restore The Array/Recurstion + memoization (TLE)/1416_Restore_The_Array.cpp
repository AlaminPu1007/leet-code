/**
 * This solution will give us "Memory Limit Exceeded".
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numberOfArrays(string s, int k)
    {
        vector<int> dp(s.size() + 1, -1);
        return Solved(0, s, k, dp);
    }

private:
    int Solved(int i, string s, int k, vector<int> &dp)
    {
        if (i >= s.size())
            return 1;

        if (s[i] == '0')
            return dp[i] = 0;

        if (dp[i] != -1)
            return dp[i];

        int ans = 0;

        for (int j = i; j < s.size(); j++)
        {
            string numStr = (s.substr(i, j - i + 1));

            if (stoll(numStr) > k)
                break;

            ans = (ans % MOD + Solved(j + 1, s, k, dp) % MOD) % MOD;
        }

        return dp[i] = ans % MOD;
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