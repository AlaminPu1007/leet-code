#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long coloredCells(int n)
    {
        return 1 + (long long)(n - 1) * n * 2;
    }
};

int main(void)
{
    Solution obj;
    int n = 3;

    cout << obj.coloredCells(n) << endl;

    return 0;
}