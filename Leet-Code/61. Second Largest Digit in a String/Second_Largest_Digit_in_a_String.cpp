
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int secondHighest(string s)
    {
        int len = s.size();
        int freq[10] = {0};

        for (int i = 0; i < len; i++)
            if (s[i] >= '0' && s[i] <= '9')
                freq[s[i] - '0']++;

        int j = 0, res = -1;
        for (int i = 9; i >= 0; i--)
        {
            if (j == 2)
                break;

            if (freq[i] != 0)
            {
                j++;
                res = i;
            }
        }
        if (j == 1)
            return -1;

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "abc1111";
    int res = obj.secondHighest(s);

    cout << res << endl;
    return 0;
}