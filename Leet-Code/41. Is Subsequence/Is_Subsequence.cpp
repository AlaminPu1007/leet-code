#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int j = 0, len = s.length();
        for (int i = 0; s[j] != '\0' && t[i] != '\0'; i++)
        {
            if (s[j] == t[i])
                j++;
        }

        if (j == len)
            return true;

        return false;
    }
};

int main(void)
{
    Solution obj;
    string s = "abc", t = "ahbgdc";
    bool res = obj.isSubsequence(s, t);
    cout << res << endl;
    return 0;
}