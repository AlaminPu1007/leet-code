#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFlipsMonoIncr(string s)
    {
        int ans = 0, num = 0;
        for (auto item : s)
        {
            if (item == '0')
            {
                ans = min(num, ans + 1);
            }
            else
                num++;
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