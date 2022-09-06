#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numMatchingSubseq(string s, vector<string> &words)
    {
        int count = 0, m = words.size(), n = s.size();
        map<string, int> Map;
        for (int i = 0; i < m; i++)
            Map[words[i]]++;

        for (auto item : Map)
        {
            string x = item.first;
            int each_word_size = x.size();
            int p = 0, q = 0;
            while (p < n && q < each_word_size)
            {
                if (s[p] == x[q])
                {
                    p++;
                    q++;
                }
                else
                {
                    p++;
                }
            }
            if (q == x.size())
                count = count + item.second;
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    string s = "abcde";
    vector<string> words = {"a", "bb", "acd", "ace"};
    int ans = obj.numMatchingSubseq(s, words);
    cout << ans << endl;
    return 0;
}