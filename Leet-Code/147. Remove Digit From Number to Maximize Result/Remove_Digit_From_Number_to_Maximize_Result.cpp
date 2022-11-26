#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        int len = number.length();
        string ans;
        for (int i = 0; i < len; i++)
        {
            if (number[i] == digit)
            {
                string temp = number.substr(0, i) + number.substr(i + 1);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;

    string ans = obj.removeDigit("1231", '1');
    cout << ans << endl;
    return 0;
}