#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numWays(vector<string> &words, string target)
    {
        vector<vector<int>> dp(words[0].size(), vector<int>(target.size(), -1));
        vector<vector<int>> freq(words[0].size(), vector<int>(26, 0));

        // precompute the character frequency at each positions
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[0].size(); j++)
            {
                int value = words[i][j] - 'a';
                freq[j][value]++;
            }
        }

        return DFS(0, 0, words, target, dp, freq);
    }

private:
    long DFS(int wordIdx, int targetIdx, vector<string> &words, string target, vector<vector<int>> &dp, vector<vector<int>> &freq)
    {
        // if we reached to the target
        if (targetIdx >= target.size())
            return 1;

        // if we do not reach to the target but wordIdx reached to the end
        if (wordIdx >= words[0].size() || words[0].size() - wordIdx < target.size() - targetIdx)
            return 0;

        if (dp[wordIdx][targetIdx] != -1)
            return dp[wordIdx][targetIdx];

        long countTarget = 0;

        int targetCharacterPosition = target[targetIdx] - 'a';

        // if we skip the characters of wordIdx positions
        countTarget += DFS(wordIdx + 1, targetIdx, words, target, dp, freq);

        // Multiply the number of choices with getWords and add it to count.
        countTarget += freq[wordIdx][targetCharacterPosition] * DFS(wordIdx + 1, targetIdx + 1, words, target, dp, freq);

        return dp[wordIdx][targetIdx] = countTarget % MOD;
    }
};

int main(void)
{
    Solution obj;

    vector<string> words = {"acca", "bbbb", "caca"};
    string t = "aba";

    cout << obj.numWays(words, t) << endl;

    return 0;
}