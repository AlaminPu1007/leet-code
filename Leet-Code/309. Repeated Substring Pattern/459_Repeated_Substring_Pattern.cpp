#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int len = s.size();
        vector<int> lps(len, 0);

        int i = 1, j = 0;

        while (i < len) // n = pattern length
        {
            // if i == j, we need to put lps[] = j + 1;
            if (s[j] == s[i])
            {
                lps[i] = j + 1;
                i++;
                j++;
            }
            // if j == 0, we need to put lps[] = 0, and increment i = i + 1,
            // because there is not possible way to matching character
            else if (j == 0)
            {
                lps[i] = 0;
                i++;
            }
            // we have to get back lps last matching index
            // ex : lps[j - 1] has 0, 0 --> means its start from begin
            else
            {
                j = lps[j - 1]; // set j value from lps table value
            }
        }

        return lps[len - 1] && len % (len - lps[len - 1]) == 0;
    }
};

int main(void)
{
    Solution obj;
    string s = "abcabcabc";
    cout << obj.repeatedSubstringPattern(s) << endl;
    return 0;
}