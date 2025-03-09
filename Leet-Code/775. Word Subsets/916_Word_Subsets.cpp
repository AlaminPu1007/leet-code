#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        vector<string> res;
        vector<int> count(26, 0);

        for (auto word : words2)
        {
            vector<int> temp(26, 0);

            for (auto ch : word)
                temp[ch - 'a']++;

            for (int i = 0; i < 26; i++)
                count[i] = max(count[i], temp[i]);
        }

        bool flag = true;

        for (auto word : words1)
        {
            vector<int> temp(26, 0);

            for (auto ch : word)
                temp[ch - 'a']++;

            for (int i = 0; i < 26; i++)
            {
                if (temp[i] < count[i])
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                res.push_back(word);

            flag = true;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> words1 = {"amazon", "apple", "facebook", "google", "leetcode"};
    vector<string> words2 = {"e", "o"};

    vector<string> res = obj.wordSubsets(words1, words2);

    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}