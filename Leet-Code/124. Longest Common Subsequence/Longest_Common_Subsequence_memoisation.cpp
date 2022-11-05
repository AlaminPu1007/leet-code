#include <bits/stdc++.h>
using namespace std;

const int ARRAY_SIZE = 1001;

class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.length(), n = text2.length();

        int MEMO[2][ARRAY_SIZE] = {};

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
                MEMO[!(i % 2)][j + 1] = text1[i] == text2[j] ? MEMO[i % 2][j] + 1 : max(MEMO[i % 2][j + 1], MEMO[!(i % 2)][j]);
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n + 1; j++)
                cout << MEMO[i][j] << " ";
            cout << endl;
        }
        return MEMO[m % 2][n];
    }
};

int main(void)
{
    Solution obj;
    int res = obj.longestCommonSubsequence("abcde", "ace");
    // cout << res << endl;
    return 0;
}