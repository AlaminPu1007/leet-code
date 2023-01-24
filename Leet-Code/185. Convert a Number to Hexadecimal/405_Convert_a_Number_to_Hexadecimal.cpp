#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string toHex(int num)
    {
        unsigned int a = num;
        if (!a)
            return "0";
        string res;

        char hexValue[] = {"0123456789abcdef"};

        while (a)
        {
            res += hexValue[a % 16];
            a /= 16;
        };

        return {res.rbegin(), res.rend()};
    }
};

int main(void)
{
    Solution obj;
    string res = obj.toHex(0);
    cout << "result is :" << res << endl;
    return 0;
}