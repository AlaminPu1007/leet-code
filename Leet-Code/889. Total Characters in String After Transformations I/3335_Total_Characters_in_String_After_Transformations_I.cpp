#include <bits/stdc++.h>
using namespace std;

class Solution
{
    const int MOD = 1e9 + 7;

public:
    int lengthAfterTransformations(string s, int t)
    {
        int n = s.size();
        int res = 0;

        vector<int> Map(26, 0);

        for (auto item : s)
            Map[item - 'a']++;

        while (t--)
        {
            vector<int> tempMap(26, 0);

            for (int i = 0; i < 26; i++)
            {
                int ch = i + 'a';
                int freq = Map[i];

                if (ch != 'z')
                    tempMap[ch + 1 - 'a'] = (tempMap[ch + 1 - 'a'] + freq) % MOD;

                else
                {
                    tempMap['a' - 'a'] = (tempMap['a' - 'a'] + freq) % MOD;
                    tempMap['b' - 'a'] = (tempMap['b' - 'a'] + freq) % MOD;
                }
            }

            Map = move(tempMap);
        }

        for (auto item : Map)
            res = (item + res) % MOD;

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "abcyy";
    cout << obj.lengthAfterTransformations(s, 2) << endl;

    return 0;
}