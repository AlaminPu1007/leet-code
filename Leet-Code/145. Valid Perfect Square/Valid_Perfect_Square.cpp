#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int i = 1, j = num;
        while (i <= j)
        {
            int mid = i + (j - i) / 2;

            // if coundition is satisfied
            if (num % mid == 0 && mid == num / mid)
                return true;
            // if target is larger than mid
            if (mid < (num / mid))
                i = mid + 1;

            else
                j = mid - 1;
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.isPerfectSquare(14);
    cout << res << endl;
    return 0;
}