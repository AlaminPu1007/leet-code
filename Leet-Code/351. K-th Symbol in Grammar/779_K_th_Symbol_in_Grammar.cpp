#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthGrammar(int n, int k)
    {
        int res = 0;
        // left = 1, problem problem description, it's as 1 base index system
        int left = 1, right = pow(2, n - 1);

        // we start loop with 1, cause, we only work for (n-1) element, if n <= 1, the loop will not execute
        for (int i = 1; i < n; i++)
        {
            int mid = (left + right) / 2;

            // we are in the left half
            /*
                  0
                0    1
              0  1 1  0
            */
            // mid always always be in left half, at this point
            if (k <= mid)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;

                // update result for only right half, cause in left tree, it's always have previous value or same value(like parent)
                /*
                     0
                    0 1

                     1
                    1 0
                */

                if (res == 1)
                    res = 0;
                else
                    res = 1;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 2, k = 2;
    cout << obj.kthGrammar(n, k) << endl;
    return 0;
}