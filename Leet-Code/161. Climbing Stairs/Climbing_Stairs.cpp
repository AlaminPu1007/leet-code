#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;

        int a = 2, b = 1;
        for (int i = 3; i <= n; i++)
        {
            a = a + b;//3,5,8,13,
            b = a - b;//2,3,5,8
        }
        return a;
    }
};