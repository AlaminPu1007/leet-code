#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int concatenatedBinary(int n) {
        long long int ans = 0, mod = 1e9 + 7;//1000000007
        for(int i = 1; i <= n; i++)
        {
            ans = ( (ans << (1 + int(log2(i)))) % mod + i ) % mod;
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    obj.concatenatedBinary(3);
    return 0;
}