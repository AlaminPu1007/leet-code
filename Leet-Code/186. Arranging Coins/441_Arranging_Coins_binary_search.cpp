#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {

        if (n <= 1)
            return n;

        long left = 0, right = n;
        long k = 0, cur = 0;

        while (left <= right)
        {
            k = (right + left) / 2;
            // get total summation of k
            cur = k * (k + 1) / 2;

            if (cur == n)
                return (int)k;

            // target is greater than n, then
            if (n < cur)
                right = k - 1;
            else
                left = k + 1;
        }

        return (int)right;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.arrangeCoins(8);
    cout << "result is :" << res << endl;
    return 0;
}