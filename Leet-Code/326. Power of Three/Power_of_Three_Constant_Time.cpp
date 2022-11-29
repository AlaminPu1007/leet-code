#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        return n > 0 && 1162261467 % n == 0;
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.isPowerOfThree(27);
    cout << res << endl;
    return 0;
}