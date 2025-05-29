#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long coloredCells(int n)
    {
        long long res = 1;
        int count = 4;

        while (--n)
        {
            res += count;
            count += 4;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 3;

    cout << obj.coloredCells(n) << endl;

    return 0;
}