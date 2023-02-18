#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countOdds(int low, int high)
    {
        // Check if low is odd. This could be easily checked using % operator, 
        // but we used bit wise operator & as they are more efficient.
        if (!(low & 1))
            low++;

        return low > high ? 0 : (high - low) / 2 + 1;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.countOdds(3, 7);
    cout << res << endl;
    return 0;
}