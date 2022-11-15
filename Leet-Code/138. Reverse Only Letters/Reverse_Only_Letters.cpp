#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int len = s.size();
        string copy;

        for (int i = 0; i < len; i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            {
                copy += s[i];
            }
        }

        int copy_len = copy.length() - 1;

        for (int i = 0; i < len; i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            {
                s[i] = copy[copy_len--];
            }
        }

        return s;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.reverseOnlyLetters("a-bC-dEf-ghIj");
    cout << ans << endl;
    return 0;
}