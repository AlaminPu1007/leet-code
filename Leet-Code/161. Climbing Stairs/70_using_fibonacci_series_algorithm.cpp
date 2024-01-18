#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int res = 0;
        int a = 0, b = 1;

        for (int i = 0; i < n; i++)
        {
            res = a + b;
            a = b;
            b = res;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 3;
    cout << obj.climbStairs(n) << endl;
    return 0;
}