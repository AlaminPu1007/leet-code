#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumMoves(string s)
    {
        int len = s.size(), res = 0, i = 0;

        while (i < len)
        {
            if (s[i] == 'O')
            {
                i++;
            }
            else
            {
                i = i + 3;
                res++;
            }
        }
        return res;
    };
};

int main(void)
{
    Solution obj;
    int res = obj.minimumMoves("OXOX");
    cout << res << endl;
    return 0;
}