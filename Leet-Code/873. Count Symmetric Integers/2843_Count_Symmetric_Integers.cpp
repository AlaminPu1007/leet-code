#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSymmetricIntegers(int low, int high)
    {
        int res = 0;

        for (int i = low; i <= high; i++)
        {
            if ((i > 10) && (i < 100) && (i % 11 == 0))
                res++;

            else if ((i > 1000) && (i < 10000))
            {
                int first = i / 1000;
                int second = (i / 100) % 10;

                int third = (i / 10) % 10;
                int fourth = (i % 10);

                if ((first + second) == (third + fourth))
                    res++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    cout << obj.countSymmetricIntegers(1, 100) << endl;

    return 0;
}