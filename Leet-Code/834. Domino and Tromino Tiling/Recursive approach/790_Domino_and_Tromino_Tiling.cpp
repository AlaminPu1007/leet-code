/*
    This solution will give us "Time Limit Exceeded".
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numTilings(int n)
    {
        return Solve(n);
    }

private:
    int Solve(int n)
    {
        // handle the base cases
        if (n == 1 || n == 2)
            return n;

        if (n == 3)
            return 5;

        // now calculate recursively the remaining sub-problems using the equations
        // ex: f(n) = 2 * f(n-1) + f(n-3);
        return (2 * Solve(n - 1) % MOD + Solve(n - 3) % MOD) % MOD;
    }
};

int main(void)
{

    Solution obj;
    cout << obj.numTilings(5);

    return 0;
}