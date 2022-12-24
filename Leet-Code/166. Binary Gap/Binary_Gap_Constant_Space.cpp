#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binaryGap(int n)
    {

        int ans = 0, lastFound = -1;

        // at most 32bit's can be present
        // That's the reason to loop through 32
        for (int i = 0; i < 32; i++)
        {
            // shit i'th bit to check with n'th bit is equal to 1
            if (((n >> i) & 1) != 0)
            {
                if (lastFound >= 0)
                    ans = max(ans, i - lastFound);

                lastFound = i;
            }
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