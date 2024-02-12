#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numRollsToTarget(int n, int k, int target)
    {
        unordered_map<string, int> cache;

        return countNumOfRolls(n, k, target, cache);
    }

private:
    int countNumOfRolls(int n, int k, int target, unordered_map<string, int> &cache)
    {
        if (n == 0)
        {
            if (target == 0)
                return 1;
            else
                return 0;
        }

        string key = to_string(n) + ',' + to_string(target);

        if (cache.find(key) != cache.end())
            return cache[key];

        int res = 0;

        for (int i = 1; i <= k; i++)
        {
            res = (res + countNumOfRolls(n - 1, k, target - i, cache)) % MOD;
        }

        cache[key] = res % MOD;

        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 30, k = 30, target = 500;
    cout << obj.numRollsToTarget(n, k, target) << endl;
    return 0;
}