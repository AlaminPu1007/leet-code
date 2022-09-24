#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        string ans;
        for (int i = 0; address[i] != '\0'; i++)
        {
            if (address[i] == '.')
            {
                ans += "[.]";
            }
            else
                ans += address[i];
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.defangIPaddr("255.100.50.0");
    cout << "ans = " << ans << endl;
    return 0;
}