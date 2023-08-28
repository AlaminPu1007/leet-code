#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string ans = "";

        while (columnNumber > 0)
        {
            // for base indexing
            columnNumber--;

            int mod = columnNumber % 26;
            ans += char('A' + mod);
            columnNumber /= 26;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main(void)
{
    Solution obj;
    int n = 2002; // BXZ -> 2,24,26
    cout << obj.convertToTitle(n) << endl;
    return 0;
}