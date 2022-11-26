#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        int len = number.length(), find_Index = 0;
        string ans;
        for (int i = 0; i < len; i++)
        {
            if (number[i] == digit)
            {
                find_Index = i;
                if (i < len - 1 && digit < number[i + 1])
                    break;
            }
        }

        ans = number.substr(0, find_Index) + number.substr(find_Index + 1);

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