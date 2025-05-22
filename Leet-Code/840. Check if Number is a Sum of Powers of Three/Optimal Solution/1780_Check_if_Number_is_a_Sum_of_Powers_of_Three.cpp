#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        // get maximum power value that less than or equal to n

        int i = 0;

        while (pow(3, i) <= n)
            i++;

        // i always increment by extra one
        // so we need to removed that one
        i--;

        while (i >= 0)
        {
            int value = pow(3, i);

            if (value <= n)
                n -= value;
            i--;
        }

        return n == 0;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.checkPowersOfThree(12) << endl;

    return 0;
}