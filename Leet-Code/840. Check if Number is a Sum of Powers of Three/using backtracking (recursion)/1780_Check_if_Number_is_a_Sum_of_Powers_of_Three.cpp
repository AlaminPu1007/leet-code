#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        return Solved(0, n, 0);
    }

private:
    bool Solved(int i, int n, int sum)
    {
        // handle the base case
        if (sum == n)
            return true;

        if (sum > n || (int)pow(3, i) > n)
            return false;

        // if we include curent power with sum
        if (Solved(i + 1, n, sum + pow(3, i)))
            return true;

        // if we exclude or skip
        return Solved(i + 1, n, sum);
    }
};

int main(void)
{
    Solution obj;
    cout << obj.checkPowersOfThree(12) << endl;

    return 0;
}