#include <iostream>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n;

        return fib(n - 1) + fib(n - 2);
    }
};

int main(void)
{
    Solution obj;
    int num = 5;
    int res = obj.fib(num);
    cout << res << endl;
}