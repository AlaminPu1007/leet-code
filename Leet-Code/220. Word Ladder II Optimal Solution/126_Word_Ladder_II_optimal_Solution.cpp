#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<vector<string>> ans;
    // dfine an gloval hash-table
    // it hold key as a string an value it's level
    unordered_map<string, int> Map;
    string b;

private:
    void DFS(string word, vector<string> &seq)
    {
        if (word == b)
        {
            reverse(seq.begin(), seq.end());
            ans.push_back(seq);

            reverse(seq.begin(), seq.end());
            return;
        }
        int level = Map[word];
        int len = word.size();

        // do traversal on word
        for (int i = 0; i < len; i++)
        {
            char originalChar = word[i];
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                word[i] = ch;
                // if word is found in map and it is lower level than root word
                bool isValid = Map.find(word) != Map.end() && Map[word] == (level - 1);

                if (isValid)
                {
                    seq.push_back(word);
                    DFS(word, seq);
                    // removed last pushed item from array
                    // for avoiding duplicate value
                    seq.pop_back();
                }
            }
            // get back original word
            word[i] = originalChar;
        }
    }

public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
    {
        // make an copy of begin-word
        b = beginWord;
        // define an set with wordList
        unordered_set<string> st(wordList.begin(), wordList.end());
        // define queue data structure
        queue<string> q;
        q.push(beginWord);
        // removed this item from set
        st.erase(beginWord);
        // push into Map, with level 1
        Map[beginWord] = 1;

        // all string has same length
        int len = beginWord.size();
        // make an level of each word from word list
        while (!q.empty())
        {
            string word = q.front();
            int level = Map[word];
            // removed it from queue
            q.pop();
            // if we reached at endword, do not need further task
            if (word == endWord)
                break;

            // traverse of word and get matching word from wordlist if it's present
            for (int i = 0; i < len; i++)
            {
                char originalChar = word[i];
                for (char ch = 'a'; ch <= 'z'; ch++)
                {
                    word[i] = ch;
                    if (st.count(word))
                    {
                        // removed it from set
                        st.erase(word);
                        // push into queue
                        q.push(word);
                        // push into map with 1 + level(next-level)
                        Map[word] = level + 1;
                    }
                }
                // get back original word
                word[i] = originalChar;
            }
        }

        // for(auto item: Map)
        //     cout<<item.first<<" "<<item.second<<endl;

        // do back track from bottom
        if (Map.find(endWord) != Map.end())
        {
            vector<string> seq;
            seq.push_back(endWord);
            DFS(endWord, seq);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    string beginWord = "hit", endWord = "cog";
    vector<string> arr = {"hot", "dot", "dog", "lot", "log", "cog"};

    vector<vector<string>> ans = obj.findLadders(beginWord, endWord, arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}