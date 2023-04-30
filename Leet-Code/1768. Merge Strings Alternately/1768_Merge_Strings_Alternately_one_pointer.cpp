#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int len1 = word1.size(), len2 = word2.size();
        string ans = "";
        int stop = max(len1, len2);

        for (int i = 0; i < stop; i++)
        {
            if (i < len1)
                ans += word1[i];
            if (i < len2)
                ans += word2[i];
        }

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