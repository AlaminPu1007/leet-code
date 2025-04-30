#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> closestPrimes(int left, int right)
    {
        vector<int> primes = getPrimes(left, right);
        vector<int> res(2, -1);
        int diff = INT_MAX;

        for (int i = 1; i < primes.size(); i++)
        {
            int value = primes[i] - primes[i - 1];

            if (value < diff)
            {
                diff = value;
                res[0] = primes[i - 1];
                res[1] = primes[i];
            }
        }

        return res;
    }

private:
    vector<int> getPrimes(int left, int right)
    {
        vector<int> res;
        vector<bool> lists(right + 1, true);
        lists[0] = lists[1] = false;

        for (int i = 2; i <= sqrt(right); i++)
        {
            if (!lists[i])
                continue;

            for (int j = i * i; j <= right; j += i)
            {
                if (j % i == 0)
                    lists[j] = false;
            }
        }

        for (int i = left; i <= right; i++)
        {
            if (lists[i])
                res.push_back(i);
        }

        // for (auto item : res)
        //     cout << item << " ";
        // cout << endl;

        return res;
    }
};

int main(void)
{
    Solution obj;
    int left = 10, right = 19;

    vector<int> res = obj.closestPrimes(left, right);

    cout << res[0] << " " << res[1] << endl;

    return 0;
}