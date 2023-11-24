#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sortVowels(string s)
    {
        unordered_map<char, int> vowels;
        int len = s.size();

        for (int i = 0; i < len; i++)
        {
            if (isVowels(s[i]))
            {
                vowels[s[i]]++;
            }
        }

        string sortingVowels = "AEIOUaeiou";
        int c = 0;

        for (int i = 0; i < len; i++)
        {

            if (isVowels(s[i]))
            {
                // Skip to the character which is having remaining count.
                while (vowels[sortingVowels[c]] == 0)
                    c++;

                s[i] = sortingVowels[c];
                vowels[sortingVowels[c]]--;
            }
        }

        return s;
    }

    bool isVowels(char a)
    {
        if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'O' || a == 'o' || a == 'u' || a == 'U')
            return true;
        else
            return false;
    }
};

int main(void)
{
    Solution obj;
    string s = "lEetcOde";
    cout << obj.sortVowels(s) << endl;
    return 0;
}