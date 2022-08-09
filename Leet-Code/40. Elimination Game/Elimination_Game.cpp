#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lastRemaining(int n)
    {
        if (n == 1)
            return 1;
        return 2 * ((n / 2) - lastRemaining(n / 2) + 1);
    }
};

int main(void)
{
    Solution obj;
    int res = obj.lastRemaining(6);
    cout << res << endl;
    return 0;
}