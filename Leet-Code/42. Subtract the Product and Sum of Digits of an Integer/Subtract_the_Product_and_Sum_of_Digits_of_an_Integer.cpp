#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0, mul = 1, rev = 0, mod = 0;
        while (n != 0)
        {
            mod = n % 10;
            mul *= mod;
            sum += mod;
            n /= 10;
        }

        return mul - sum;
    }
};

int main(void)
{
    Solution obj;
    obj.subtractProductAndSum(114);
    return 0;
}