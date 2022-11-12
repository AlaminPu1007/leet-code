#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        if (num < 10)
            return true;

        bool counter = false;

        while (num)
        {
            int mod = num % 10;

            if (mod == 0 && !counter)
                return false;

            counter = true;

            num /= 10;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.isSameAfterReversals(526);
    cout << res << endl;
    return 0;
}