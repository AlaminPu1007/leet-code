#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int len1 = num1.size() - 1, len2 = num2.size() - 1, carry = 0;
        string ans = "";
        while (len1 >= 0 || len2 >= 0 || carry > 0)
        {
            // first num1
            if (len1 >= 0)
            {
                carry += num1[len1] - '0';
                len1 -= 1;
            }

            // first num2
            if (len2 >= 0)
            {
                carry += num2[len2] - '0';
                len2 -= 1;
            }

            ans += char(carry % 10 + '0');
            carry /= 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string num1 = "456", num2 = "77";
    string res = obj.addStrings(num1, num2);
    cout << res << endl;
    return 0;
}