#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool canWinNim(int n)
    {
        return (n % 4 != 0);
    }
};

int main(void)
{
    Solution obj;
    obj.canWinNim(5);
    return 0;
}