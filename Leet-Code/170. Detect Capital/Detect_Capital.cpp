#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int len = word.size();
        bool match = true;

        if (len == 1)
            return true;

        // case 1: All capital
        // check first and second character is capital
        if (isupper(word[0]) && isupper(word[1]))
        {
            for (int i = 2; i < len; i++)
            {
                if (islower(word[i]))
                {
                    return false;
                }
            }
        }
        else
        {
            for (int i = 1; i < len; i++)
            {
                if (isupper(word[i]))
                {
                    return false;
                }
            }
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    string str = "UsA";
    bool res = obj.detectCapitalUse(str);
    cout << "Result is : " << res << endl;
    return 0;
}