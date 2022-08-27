
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int len1 = s.length(), len2 = t.length();
        int freq[26] = {0};

        for (int i = 0; i < len1; i++)
            freq[s[i] - 'a']++;

        for (int i = 0; i < len2; i++)
        {
            if (freq[t[i] - 'a'])
                freq[t[i] - 'a']--;
            else
                // cout<<t[i]<<" ";
                return t[i];
        }
        return '-1';
    }
};

int main(void)
{
    Solution obj;
    string s = "a", t = "aa";

    obj.findTheDifference(s, t);
    return 0;
}