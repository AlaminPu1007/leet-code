#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    const int M = 1e9 + 7;

    int numberOfWays(string corridor)
    {
        // Cache the result of each sub-problem
        int cache[corridor.length()][3];
        memset(cache, -1, sizeof(cache));

        return DFS(0, 0, corridor, cache);
    }

public:
    int DFS(int i, int seat, string &corridor, int cache[][3])
    {
        if (i == corridor.length())
        {
            return seat == 2 ? 1 : 0;
        }

        if (cache[i][seat] != -1)
        {
            return cache[i][seat];
        }

        int res = 0;

        if (seat == 2)
        {
            if (corridor[i] == 'S')
            {
                res = DFS(i + 1, 1, corridor, cache);
            }
            else
            {
                res = (DFS(i + 1, 0, corridor, cache) + DFS(i + 1, 2, corridor, cache)) % M;
            }
        }
        else
        {
            if (corridor[i] == 'S')
            {
                res = DFS(i + 1, seat + 1, corridor, cache);
            }
            else
            {
                res = DFS(i + 1, seat, corridor, cache);
            }
        }

        // Memoize the result, and return it
        cache[i][seat] = res;
        return cache[i][seat];
    }
};

int main(void)
{
    Solution obj;
    string str = "SSPPSPS";
    cout << obj.numberOfWays(str) << endl;
    return 0;
}