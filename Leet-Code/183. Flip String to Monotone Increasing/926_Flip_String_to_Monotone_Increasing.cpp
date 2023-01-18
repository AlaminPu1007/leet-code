#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFlipsMonoIncr(string s)
    {
        int no_of_zero = 0;
        for (auto ch : s)
        {
            if (ch == '0')
                no_of_zero++;
        }

        int ans = no_of_zero;

        for (auto item : s)
        {
            if (item == '0')
            {
                ans = min(ans, --no_of_zero);
            }
            else
            {
                no_of_zero++;
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.minFlipsMonoIncr("010110");
    cout << res << endl;
    return 0;
}