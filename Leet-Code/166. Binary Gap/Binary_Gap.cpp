#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binaryGap(int n)
    {
        int A[30], c = 0;

        // at most 32bit's can be present
        // That's the reason to loop through 32
        for (int i = 0; i < 32; i++)
        {
            // shit i'th bit to check with n'th bit is equal to 1
            if (((n >> i) & 1) != 0)
            {
                A[c++] = i;
            }
        }
        int ans = 0;
        for (int i = 1; i < c; i++)
        {
            ans = max(ans, A[i] - A[i - 1]);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.binaryGap(22);
    cout << res << endl;
    return 0;
}