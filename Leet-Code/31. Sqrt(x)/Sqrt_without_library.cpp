#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        long int root, i = 1;

        if (x == 0)
            return 0;

        for (i; i * i <= x; i++)
            root = i;

        return root;
    }
};

int main(void)
{
    Solution obj;
    obj.mySqrt(49);

    return 0;
}