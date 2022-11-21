#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countBits(int n)
    {

        // define vector array with n size
        vector<int> res(n);

        // for num 0
        res.push_back(0);

        if (n == 0)
            return res;

        for (int i = 1; i <= n; i++)
        {
            // for event no of i
            if (i % 2 == 0)
                res[i] = res[i / 2];
            else
                res[i] = res[(i - 1)] + 1;
        }

        return res;
    }
};