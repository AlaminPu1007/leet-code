#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int len = s.size();
        int mid = len / 2, count = 0;

        for (int i = 0; i < mid; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                count++;
            }

            int j = --len;

            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
            {
                count--;
            }
        }

        if (count)
            return false;

        return true;
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.halvesAreAlike("book");
    cout << res << endl;
    return 0;
}