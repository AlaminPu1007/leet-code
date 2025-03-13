#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimizeXor(int num1, int num2)
    {
        int noOfBits = countNoOfBits(num2);
        int res = 0;

        // now cancel left most (LSB) bits by noOfBits
        // the num at most 32 bits, since we are at 0 base index,
        int i = 31;

        while (i >= 0 && noOfBits)
        {

            // if num1 the left most bit are set, need to make it zero by constructing new num1. ex: res
            if (num1 & (1 << i))
            {
                noOfBits--;
                res += (1 << i);
            }

            i--;
        }

        // now set bits. lowest to heights weights
        for (int i = 0; i < 32 && noOfBits; i++)
        {
            if ((num1 & (1 << i)) == 0)
            {
                noOfBits--;
                res += (1 << i);
            }
        }

        return res;
    }

private:
    int countNoOfBits(int n)
    {
        int count = 0;

        while (n)
        {
            // if number has any bit are set, then counter will increment by one
            count += (n & 1);

            // now left shift n by 1
            n >>= 1;
        }

        return count;
    }
};

int main(void)
{
    int num1 = 1, num2 = 12;
    Solution obj;
    cout << obj.minimizeXor(num1, num2) << endl;
    return 0;
}