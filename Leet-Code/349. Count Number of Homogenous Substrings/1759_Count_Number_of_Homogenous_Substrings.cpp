#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countHomogenous(string s)
    {
        int count = 0;
        int mod = 1e9 + 7;
        int ans = 0;
        int len = s.size();

        for (int i = 0; i < len; i++)
        {
            if (i == 0 || s[i - 1] == s[i])

                count++;

            else
                count = 1;

            ans = (ans + count) % mod;
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string s = "abbcccaa";
    cout << obj.countHomogenous(s) << endl;
    return 0;
}