#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int distinctIntegers(int n)
    {
        if (n == 1)
            return 1;
        return n - 1;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.distinctIntegers(5);
    cout << res << endl;
    return 0;
}