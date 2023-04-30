#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int len1 = word1.size(), len2 = word2.size();
        int i = 0, j = 0;
        string ans = "";

        while (i < len1 && j < len2)
        {
            ans += word1[i++];
            ans += word2[j++];
        }

        if (i < len1)
        {
            ans += word1.substr(i, len1 + 1);
        }
        if (j < len2)
            ans += word2.substr(j, len2 + 1);

        return ans;
    }
};

int main(void)
{
    Solution obj;
    string word1 = "abcd", word2 = "pq";
    string res = obj.mergeAlternately(word1, word2);
    cout << res << endl;
    return 0;
}