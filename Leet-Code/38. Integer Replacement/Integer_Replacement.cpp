#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int integerReplacement(int n1)
    {
        int count = 0;
        long n = (long)n1;

        while (n != 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else
            {
                long left = (n - 1) / 2;
                if (left == 1 || left % 2 == 0)
                {
                    n = n - 1;
                }
                else
                {
                    n = n + 1;
                }
            }
            count++;
        }
        // cout << count << endl;
        return count;
    }
};

int main(void)
{
    Solution obj;
    obj.integerReplacement(8);
    return 0;
}