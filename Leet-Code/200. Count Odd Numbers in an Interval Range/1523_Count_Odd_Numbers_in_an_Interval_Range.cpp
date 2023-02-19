#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countOdds(int low, int high)
    {
        // Check if low is odd. This could be easily checked using % operator, but we used bit wise operator & as they are more efficient.
        if (!(low & 1))
            low++;

        int res = 0;

        for (int i = low; i <= high; i = i + 2)
        {
            res++;
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.countOdds(8, 10);
    cout << res << endl;
    return 0;
}