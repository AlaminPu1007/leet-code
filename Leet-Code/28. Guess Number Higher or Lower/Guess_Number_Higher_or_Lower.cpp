#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int guessNumber(int n)
    {
        int low = 1, high = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            // guess is leet code predefine method, we do not have to create it
            // just use this method, leet code will handle it
            int res = guess(mid);

            if (res == 0)
            {
                return mid;
            }
            else if (res > 0)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
};

int main(void)
{
    Solution obj;
    int n = 10;
    obj.guessNumber(n);
    return 0;
}