#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef long long ll;
    int MOD = 1000000007;

public:
    int countGoodNumbers(long long n)
    {
        return (binaryExponentiation(4, n / 2) * binaryExponentiation(5, n - n / 2)) % MOD;
    }

private:
    ll binaryExponentiation(ll a, ll b)
    {
        ll res = 1;

        while (b)
        {
            if (b % 2 == 1)
                res = (res * a) % MOD;

            a = (a * a) % MOD;
            b /= 2;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.countGoodNumbers(50) << endl;

    return 0;
}