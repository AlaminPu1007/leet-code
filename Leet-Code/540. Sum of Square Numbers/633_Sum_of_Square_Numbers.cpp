#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long left = 0, right = sqrt(c);

        while (left <= right)
        {
            long total = left * left + right * right;
            if (total < c)
                left++;

            if (total > c)
                right--;

            else if (total == c)
                return true;
        }

        return false;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.judgeSquareSum(5) << endl;
    return 0;
}