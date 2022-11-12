#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        string ans = word;
        int j = 0, i;
        for (i = 0; word[i] != '\0'; i++)
        {
            if (word[i] == ch)
            {
                j = i;
                break;
            }
        }

        if (!j)
            return word;

        int c = 0;

        for (int k = i; k >= 0; k--)
        {
            ans[c++] = word[k];
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.reversePrefix("abcd", 'z');
    cout << ans << endl;
    return 0;
}