#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> wordBreak(string s, vector<string> &wordDict)
    {
        vector<string> res;
        unordered_set<string> st;

        for (auto item : wordDict)
            st.insert(item);

        string curStr = "";

        DFS(0, s, st, curStr, res);

        return res;
    }

private:
    void DFS(int index, string s, unordered_set<string> &st, string &curStr, vector<string> &res)
    {
        // handle the base case
        // If we've reached the end of the string, add the current sentence to
        // results
        if (index == s.size())
        {
            res.push_back(curStr);
            return;
        }

        // iterate all possible substring
        for (int i = index; i < s.size(); i++)
        {
            // for 0 base indexing
            string word = s.substr(index, (i - index) + 1);

            if (st.find(word) != st.end())
            {
                string originalSentence = curStr;

                if (!curStr.empty())
                    curStr += " ";

                curStr += word;

                // (i+1) -> move to the next possible word
                DFS(i + 1, s, st, curStr, res);

                curStr = originalSentence;
            }
        }
    }
};

int main(void)
{
    Solution obj;
    string s = "catsanddog";
    vector<string> wordDict = {"cat", "cats", "and", "sand", "dog"};

    vector<string> res = obj.wordBreak(s, wordDict);

    for (auto item : res)
        cout << item << endl;

    return 0;
}