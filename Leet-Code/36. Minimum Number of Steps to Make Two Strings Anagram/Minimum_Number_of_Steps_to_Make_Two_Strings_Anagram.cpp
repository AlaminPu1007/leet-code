#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        int freq[26] = {0}, res = 0;
        for (int i = 0; s[i] != '\0'; i++)
            freq[s[i] - 'a']++;

        for (int i = 0; t[i] != '\0'; i++)
        {
            if (freq[t[i] - 'a'] == 0)
            {
                res++;
            }
            else
                freq[t[i] - 'a']--;
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "bab", t = "aba";
    obj.minSteps(s, t);
    return 0;
}