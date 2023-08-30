#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        vector<int> primes(n + 1, 1);

        for (int i = 2; i < n; i++)
            for (long long j = (long long)i * i; j < n; j += i)
                primes[j] = 0;

        int count = 0;

        for (int i = 2; i < n; i++)
            if (primes[i])
                count++;

        return count;
    }
};

int main(void)
{
    Solution obj;
    int n = 10;
    cout << obj.countPrimes(n) << endl;
    return 0;
}