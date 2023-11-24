#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sortVowels(string s)
    {
        vector<char> vowels;
        int len = s.size();

        for (int i = 0; i < len; i++)
        {
            if (isVowels(s[i]))
            {
                vowels.push_back(s[i]);
            }
        }

        sort(vowels.begin(), vowels.end());
        int c = 0;

        for (int i = 0; i < len; i++)
        {
            if (isVowels(s[i]))
            {
                s[i] = vowels[c++];
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