#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int freq[26] = {0};
        int len = ransomNote.size(), len2 = magazine.size();

        for (int i = 0; i < len2; i++)
            freq[magazine[i] - 'a']++;

        for (int i = 0; i < len; i++)
        {
            if (!freq[ransomNote[i] - 'a'])
                return false;

            else
                freq[ransomNote[i] - 'a']--;
        }
        return true;
    }
};

int main(void)
{
    Solution obj;
    string ransomNote = "a", magazine = "b";
    obj.canConstruct(ransomNote, magazine);
    return 0;
}