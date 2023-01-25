#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {

        if (n <= 1)
            return n;

        int res = 0;
        int div = 0;
        int copy = n;

        for (int i = 1; i < copy; i++)
        {
            if (n < 0)
                break;

            div = n / i;
            if (div > 0)
                res++;
            n -= i;
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.arrangeCoins(8);
    cout << "result is :" << res << endl;
    return 0;
}