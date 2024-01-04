#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfMatches(int n)
    {
        int res = 0;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                res += (n / 2);
                n /= 2;
            }
            else
            {
                res += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.numberOfMatches(7) << endl;

    return 0;
}