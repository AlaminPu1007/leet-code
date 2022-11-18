#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isUgly(int n)
    {
        // if n is non-positive number
        if (n <= 0)
            return false;

        for (auto item : {2, 3, 5})
        {
            n = KeepDividing(n, item);
        }

        return n == 1;
    }

private:
    int KeepDividing(int n, int divisor)
    {
        while (n % divisor == 0)
        {
            // keep dividing til mod will be 0
            n /= divisor;
        }
        return n;
    }
};

int main(void)
{
    Solution obj;
    bool ans = obj.isUgly(14);
    cout << ans << endl;
    return 0;
}
