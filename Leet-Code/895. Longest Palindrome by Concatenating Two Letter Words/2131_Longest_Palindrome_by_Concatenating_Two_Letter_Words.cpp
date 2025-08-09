#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        unordered_map<string, int> Map;

        for (auto item : words)
            Map[item]++;

        int res = 0;
        bool isCenterUsed = false;

        for (auto item : words)
        {
            string rev = item;
            reverse(rev.begin(), rev.end());

            if (item != rev)
            {
                if (Map[item] && Map[rev])
                {
                    Map[item]--;
                    Map[rev]--;

                    res += 4;
                }
            }
            else
            {
                // both are similar words
                if (Map[item] >= 2 && Map[rev] >= 2)
                {
                    Map[item]--;
                    Map[rev]--;

                    res += 4;
                }
                else
                {
                    if (Map[item] == 1 && !isCenterUsed)
                    {
                        Map[item]--;
                        res += 2;
                        isCenterUsed = true;
                    }
                }
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> words = {"lc", "cl", "gg"};
    cout << obj.longestPalindrome(words) << endl;

    return 0;
}