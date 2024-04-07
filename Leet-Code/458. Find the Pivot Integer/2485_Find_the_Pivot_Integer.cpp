#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotInteger(int n)
    {
        int totalSum = getTotalSum(n);
        for (int i = 1; i <= n; i++)
        {
            int leftSum = getTotalSum(i);
            int rightSum = totalSum - getTotalSum(i - 1);

            if (leftSum == rightSum)
                return i;
        }
        return -1;
    }

private:
    int getTotalSum(int n)
    {
        return (n * (n + 1)) / 2;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.pivotInteger(8) << endl;
    return 0;
}