#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        int index = -1, curDigit = 0, copy_num = num;

        while (copy_num > 0)
        {
            // If the current digit is '6', record it as the highest digit of 6
            if (copy_num % 10 == 6)
                // update index by curDigit value
                index = curDigit;

            // Move on to the next digit.
            copy_num /= 10;
            curDigit++;
        }
        // If we don't find any digit of '6', return the original number,
        // otherwise, increment 'num' by the difference made by the first '6'.
        // There might be precision loss in pow function if 'indexFirstSix' is large,
        // we can write a for loop to avoid the precision loss.
        return index == -1 ? num : num + 3 * pow(10, index);
    }
};

int main(void)
{
    Solution obj;
    int res = obj.maximum69Number(9669);
    cout << res << endl;
    return 0;
}