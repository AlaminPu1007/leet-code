
// With constant spaces

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int n = s.size(), m = t.size();
        if (!n)
            return t[0];

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
            sum1 += (int)(s[i] - 'a');

        for (int i = 0; i < m; i++)
            sum2 += (int)(t[i] - 'a');

        char ch = (char)(sum2 - sum1) + 'a';

        return ch;
    }
};

int main(void)
{
    Solution obj;
    string s = "abcd", t = "abcde";
    cout << obj.findTheDifference(s, t) << endl;
    return 0;
}