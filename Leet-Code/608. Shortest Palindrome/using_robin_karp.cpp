#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 10e7 + 1;

public:
    string shortestPalindrome(string s)
    {
        long long n = s.size();
        long long prefix = 0, suffix = 0, base = 29, power = 1;
        long long last_seen_idx = 0;

        if (n == 0)
            return "";

        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            int value = (ch - 'a') + 1;

            // create a hashing for prefix by right sifting
            prefix = (prefix * base) % MOD;
            prefix = (prefix + value) % MOD;

            // create a hashing for suffix by left sifting
            suffix = (suffix + value * power) % MOD;
            power = (power * base) % MOD;

            if (prefix == suffix)
                last_seen_idx = i;
        }

        string tempStr = s.substr(last_seen_idx + 1, -1);
        reverse(tempStr.begin(), tempStr.end());
        s = tempStr + s;

        return s;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.shortestPalindrome("aacecaaa") << endl;
    return 0;
}