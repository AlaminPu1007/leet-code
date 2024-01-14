#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        int n = word1.size(), m = word2.size();
        if (n != m)
            return false;

        vector<int> freq1(26, 0), freq2(26, 0);

        for (char ch : word1)
        {
            freq1[ch - 'a']++;
        }

        for (char ch : word2)
        {
            freq2[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {

            if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0))
            {
                return false;
            }
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
                return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    string word1 = "abc", word2 = "bca";
    cout << obj.closeStrings(word1, word2);
    return 0;
}