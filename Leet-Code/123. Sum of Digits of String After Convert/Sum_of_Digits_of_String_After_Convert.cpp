#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getLucky(string s, int k)
    {
        int sum = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            int value = s[i] - 'a' + 1;
            sum += value > 9 ? (value % 10 + value / 10) : value;
        }

        k -= 1;

        while (k-- && sum >= 10)
        {
            sum = SumUp(sum);
        }

        return sum;
    }
    // method to sum through k value
    int SumUp(int num)
    {
        int sum = 0;
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.getLucky("abcaad", 2);
    cout << res << endl;
    return 0;
}