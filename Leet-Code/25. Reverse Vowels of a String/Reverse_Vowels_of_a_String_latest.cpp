// latest solution
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int end = s.size() - 1, start = 0;
        while (start < end)
        {
            // find the right side vowel
            while (start < end + 1 && !isVowel(s[start]))
                start++;

            // find the left side vowel
            while (end >= 0 && !isVowel(s[end]))
                end--;
            // swap left side vowel with right side
            if (start < end)
                swap(s[start++], s[end--]);
        };
        return s;
    }
    // method to check is Vowel
    bool isVowel(char c)
    {
        return c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u' || c == 'A' || c == 'I' || c == 'E' || c == 'O' || c == 'U';
    }
};

int main(void)
{
    Solution obj;
    string res = obj.reverseVowels("leetcode");
    cout << res << endl;
    return 0;
}