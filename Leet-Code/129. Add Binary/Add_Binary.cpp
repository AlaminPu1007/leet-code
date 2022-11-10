
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.length() - 1, j = b.length() - 1, carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry)
        {
            if (i >= 0)
            {
                carry += a[i] - '0';
                i--;
            }

            if (j >= 0)
            {
                carry += b[j] - '0';
                j--;
            }

            ans += (carry % 2) + '0';
            carry /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.addBinary("11", "1");
    cout << ans << endl;
    return 0;
}