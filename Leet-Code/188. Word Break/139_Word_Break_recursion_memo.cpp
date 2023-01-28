#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        vector<int> memo(s.size(), -1);
        set<string> word_set(wordDict.begin(), wordDict.end());

        return findWord(0, s, word_set, memo);
    }

private:
    bool findWord(int start, string s, set<string> &word_set, vector<int> &memo)
    {
        if (s.size() == start)
        {
            return true;
        }

        if (memo[start] != -1)
            return memo[start];

        for (int i = start + 1; i <= s.size(); i++)
        {
            // find substring inside set
            if (word_set.find(s.substr(start, i - start)) != word_set.end() && findWord(i, s, word_set, memo))
                return memo[start] = true;
        }
        return memo[start] = false;
    }
};

int main(void)
{
    Solution obj;
    vector<string> wordDict = {"leet", "code"};
    bool res = obj.wordBreak("leetcode", wordDict);
    cout << res << endl;
    return 0;
}