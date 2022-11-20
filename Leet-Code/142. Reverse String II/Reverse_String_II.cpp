#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {
        int len = s.size();
        int l = 0;
        int value = min(k, len);

        while (l < len)
        {
            reverse(s.begin() + l, s.begin() + value);
            l += 2 * k;
            value = min(k + l, len);
            ;
        }
        return s;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.reverseStr("abcdefg", 2);
    cout << ans << endl;
    return 0;
}