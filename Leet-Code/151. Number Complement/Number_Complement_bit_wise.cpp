#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findComplement(int num)
    {
        int powerofTwo = 2, copyNum = num;

        // after left shif by 1 bit's(1 0 1 -> 0 1 0) initial
        while (copyNum >> 1)
        {
            copyNum >>= 1;

            powerofTwo <<= 1;
        }

        return (powerofTwo - num - 1);
    }
};

int main(void)
{
    Solution obj;
    int res = obj.findComplement(5);
    cout << res << endl;
    return 0;
}