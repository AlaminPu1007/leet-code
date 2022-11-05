#include <bits/stdc++.h>
using namespace std;

const int ARRAY_SIZE = 1001;

class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.length(), n = text2.length();

        int DP[ARRAY_SIZE][ARRAY_SIZE];

        for (int i = 0; i < m; i++)
            DP[i][0] = 0;

        for (int i = 0; i < n; i++)
            DP[0][i] = 0;

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (text1[i] == text2[j])
                {
                    DP[i + 1][j + 1] = DP[i][j] + 1;
                }
                else
                {
                    DP[i + 1][j + 1] = max(DP[i + 1][j], DP[i][j + 1]);
                }
            }
        }

        return DP[m][n];
    }
};

int main(void)
{
    Solution obj;
    int res = obj.longestCommonSubsequence("abcde", "ace");
    // cout << res << endl;
    return 0;
}