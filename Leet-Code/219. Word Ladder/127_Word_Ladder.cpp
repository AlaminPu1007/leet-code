#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        st.erase(beginWord);

        while (!q.empty())
        {
            string word = q.front().first;
            int dis = q.front().second;
            q.pop();

            if (word == endWord)
                return dis;
            int len = word.size();
            for (int i = 0; i < len; i++)
            {
                char originalChar = word[i];
                for (char ch = 'a'; ch <= 'z'; ch++)
                {
                    word[i] = ch;
                    if (st.find(word) != st.end())
                    {
                        st.erase(word);
                        q.push({word, dis + 1});
                    }
                }
                word[i] = originalChar;
            }
        }
        return 0;
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"des", "der", "dfr", "dgt", "dfs"};

    string beginWord = "der", endWord = "dfs";
    int res = obj.ladderLength(beginWord, endWord, arr);
    cout << res << endl;
    return 0;
}