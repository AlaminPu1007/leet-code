#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int len = s.length() - 1, i = 0;
        vector<char> char_vowels;

        while (i < len)
        {
            // if both chars are vowels swap them and shift right and left pointers
            if (vowels(s[i]) && vowels(s[len]))
            {
                swap(s[len--], s[i++]);
            }
            else
            {
                if (!vowels(s[i]))
                {
                    i++;
                }
                if (!vowels(s[len]))
                {
                    len--;
                }
            }
        }

        return s;
    };
    // check vowels
    bool vowels(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    };
};

int main(void)
{
    Solution obj;
    string s = "leetcode";
    obj.reverseVowels(s);
    return 0;
}