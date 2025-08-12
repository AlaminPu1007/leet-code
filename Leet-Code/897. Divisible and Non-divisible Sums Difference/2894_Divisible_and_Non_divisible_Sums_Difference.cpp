#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int num1 = 0, num2 = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
                num2 += i;
            else
                num1 += i;
        }

        return num1 - num2;
    }
};

int main(void)
{
    Solution obj;
    int n = 10, m = 3;

    cout << obj.differenceOfSums(n, m) << endl;

    return 0;
}