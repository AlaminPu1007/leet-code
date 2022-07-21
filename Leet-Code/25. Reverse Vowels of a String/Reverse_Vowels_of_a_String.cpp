/**
    Runtime: 8 ms, faster than 73.62% of C++ online submissions for Reverse Vowels of a String.
    Memory Usage: 7.9 MB, less than 34.03% of C++ online submissions for Reverse Vowels of a String.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int len = s.length();
        vector<char> char_vowels;

        for (int i = 0; i < len; i++)
        {
            if (vowels(s[i]))
            {
                // push vowels inside another array
                char_vowels.push_back(s[i]);
            }
        }
        int j = char_vowels.size() - 1;
        // reverse vowels from root string array
        for (int i = 0; i < len; i++)
        {
            if (vowels(s[i]))
            {
                s[i] = char_vowels[j];
                j = j - 1;
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