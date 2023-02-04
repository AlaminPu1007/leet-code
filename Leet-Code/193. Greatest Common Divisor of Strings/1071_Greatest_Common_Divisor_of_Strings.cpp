#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        int len = str1.size(), len2 = str2.size();

        if (str1 + str2 != str2 + str1)
        {
            return "";
        }

        int gcdLength = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLength);
    }
};

int main(void)
{
    Solution obj;
    string str1 = "LEET", str2 = "CODE";
    string res = obj.gcdOfStrings(str1, str2);
    cout << res << endl;
    return 0;
}