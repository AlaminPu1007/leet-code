#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {

        if (n < 1)
            return false;

        while (n % 3 == 0)
        {
            n /= 3;
        }
        return n == 1;
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.isPowerOfThree(27);
    cout << res << endl;
    return 0;
}