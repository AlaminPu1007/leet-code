#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long minEnd(int n, int x)
    {
        long long res = x;

        for (int i = 1; i < n; i++)
        {
            res = (res + 1) | x;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.minEnd(3, 4) << endl;
    return 0;
}