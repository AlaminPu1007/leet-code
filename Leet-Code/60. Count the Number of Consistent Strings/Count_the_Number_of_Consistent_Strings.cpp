#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int count = 0;
        int allowed_len = allowed.size(), words_len = words.size();
        int freq[26] = {0};

        for (int i = 0; i < allowed_len; i++)
            freq[allowed[i] - 'a']++;

        for (int i = 0; i < words_len; i++)
        {
            int each_len = words[i].size();
            int check = 0;

            for (int j = 0; j < each_len; j++)
            {
                if (freq[words[i][j] - 'a'])
                    check++;

                else
                    break;
            }

            if (each_len == check)
                count++;
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    string allowed = "abc";
    vector<string> words = {"a", "b", "c", "ab", "ac", "bc", "abc"};

    int res = obj.countConsistentStrings(allowed, words);
    cout << res << endl;
    return 0;
}