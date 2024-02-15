#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        int res = 0;
        vector<int> freq(26, 0);
        int n = chars.size(), m = words.size();

        for (int i = 0; i < n; i++)
        {
            freq[chars[i] - 'a']++;
        }

        for (auto item : words)
        {
            int flag = false;
            vector<int> copyFreq = freq;
            for (int i = 0; i < item.size(); i++)
            {
                if (copyFreq[item[i] - 'a'] == 0)
                {
                    flag = true;
                    break;
                }
                else
                {
                    copyFreq[item[i] - 'a']--;
                }
            }
            if (!flag)
            {
                res += item.size();
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> words = {"hello", "world", "leetcode"};
    string ch = "welldonehoneyr";
    cout << obj.countCharacters(words, ch) << endl;
    return 0;
}