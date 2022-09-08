
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {

        int len = words.size();
        vector<string> ans;
        int freq[100][26] = {0};

        // store the each words frequency
        for (int i = 0; i < len; i++)
        {
            int each_word_len = words[i].size();
            for (int j = 0; j < each_word_len; j++)
                freq[i][words[i][j] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            int count = 0, Min = INT_MAX;

            for (int j = 0; j < len; j++)
            {
                if (freq[j][i])
                {
                    count++;
                    Min = min(Min, freq[j][i]);
                }
            }
            if (count == len)
            {
                for (int j = 0; j < Min; j++)
                {
                    ans.push_back(string(1, i + 'a'));
                }
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> words = {"bella", "label", "roller"};
    vector<string> res = obj.commonChars(words);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}