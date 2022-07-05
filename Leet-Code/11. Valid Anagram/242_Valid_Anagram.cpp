#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        int count = 0, freq[26] = {0}, i, s_len = s.length(), t_len = t.length();

        if (t_len != s_len)
            return false;

        // method to count each character frequency
        for (i = 0; s[i] != '\0'; i++)
            freq[s[i] - 'a']++;

        for (i = 0; s[i] != '\0'; i++)
            freq[t[i] - 'a']--;

        for (i = 0; i < 26; i++)
        {
            if (freq[i])
                count++;
        }

        if (count)
            return false;
        return true;
    }
};

int main(void)
{
    Solution obj;
    string s = "anagram", t = "nagaram";

    obj.isAnagram(s, t);

    return 0;
}