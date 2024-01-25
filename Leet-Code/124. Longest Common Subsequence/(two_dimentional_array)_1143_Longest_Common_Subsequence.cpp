/**
 * Time-Complexity: `O(n*m)
 * Space-Complexity: `O(n*m)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int n = text1.size(), m = text2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        // this would an bottom up approach
        // we calculate result from the bottom or end
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                // if both are matching character
                if (text1[i] == text2[j])
                    // only take the diagonal value
                    dp[i][j] = (1 + dp[i + 1][j + 1]);

                else

                    dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }

        return dp[0][0];
    }
};

int main(void)
{
    Solution obj;
    string text1 = "abcde", text2 = "ace";
    cout << obj.longestCommonSubsequence(text1, text2) << endl;
    return 0;
}