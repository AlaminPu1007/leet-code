#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalMoney(int n)
    {
        int count = 0, res = 0;

        for (; n > 0;)
        {
            for (int i = 1; i <= min(n, 7); i++)
                res += (i + count);

            n -= 7;
            count++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.totalMoney(20) << endl;
    return 0;
}