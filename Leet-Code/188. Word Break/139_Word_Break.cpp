/*This brute-force approach is included because it is generally a good place to start when trying to develop an efficient solution. However, this approach is not expected to pass all test cases. As such, we will discuss how to improve this solution in the following approaches*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        int len = s.size();
        set<string> word_set(wordDict.begin(), wordDict.end());

        return findWord(0, s, word_set);
    }

private:
    bool findWord(int start, string s, set<string> &word_set)
    {
        if (s.size() == start)
        {
            return true;
        }

        for (int i = start + 1; i <= s.size(); i++)
        {
            // find substring inside set
            if (word_set.find(s.substr(start, i - start)) != word_set.end() && findWord(i, s, word_set))
                return true;
        }
        return false;
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