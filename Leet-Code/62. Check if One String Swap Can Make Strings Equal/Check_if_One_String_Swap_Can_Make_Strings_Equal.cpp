#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {

        int first_len = s1.length(), i = 0, j = 0;
        if (s1 == s2)
            return true;

        for (i = 0; i < first_len; i++)
            if (s1[i] != s2[i])
                break;

        for (j = first_len - 1; j >= 0; j--)
            if (s1[j] != s2[j])
                break;

        swap(s1[i], s1[j]);
        return s1 == s2;
    }
};

int main(void)
{
    Solution obj;
    string s1 = "bank", s2 = "kanb";

    bool res = obj.areAlmostEqual(s1, s2);
    cout << res;
    return 0;
}