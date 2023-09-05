#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> words;
        int n = pattern.size();
        int strLen = s.size();

        unordered_map<char, string> Map;
        unordered_map<string, char> Map2;

        string temp = "";
        int count = 0;

        for (int i = 0; i < strLen; i++)
        {
            if (s[i] == ' ')
            {
                words.push_back(temp);

                Map[pattern[count]] = temp;
                Map2[temp] = pattern[count];

                temp = "";
                count++;
            }
            else
                temp += s[i];
        }

        // put last word in vector
        words.push_back(temp);

        // put into hash-map
        Map[pattern[count]] = temp;
        Map2[temp] = pattern[count];

        if (words.size() != n)
            return false;

        for (int i = 0; i < n; i++)
        {
            // get character from pattern
            char pat = pattern[i];
            string word = words[i];

            if (Map[pat] == word && Map2[word] == pat)
                continue;

            return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    string s = "dog cat cat dog", p = "abba";
    cout << obj.wordPattern(p, s) << endl;
    return 0;
}
