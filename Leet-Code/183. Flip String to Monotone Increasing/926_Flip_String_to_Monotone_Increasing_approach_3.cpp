#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFlipsMonoIncr(string s)
    {
        int no_flips = 0, no_one = 0;
        for (auto item : s)
        {
            // we care about whenever any 0 after 1, then we need to flip something
            if (item == '1')
            {
                no_one++;
            }
            else if (no_one > 0)
            {
                no_flips++;
                no_one--;
            }
        }
        return no_flips;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.minFlipsMonoIncr("001101");
    cout << res << endl;
    return 0;
}