#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        // There is only one bit set in the binary representation of n (or n is a power of 2)
        // n & (n - 1) == 0 mean it's a power of 2, EX: "1 0 0 0"
        // 4 % 3 == 1, means, n is power of 4
        return n > 0 && (n & n - 1) == 0 && (n % 3 == 1);
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.isPowerOfFour(16);
    cout << res << endl;
    return 0;
}