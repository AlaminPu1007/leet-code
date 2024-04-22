#include <bits/stdc++.h>
using namespace std;

class Solution
{
    unordered_map<int, int> Map;
    int n = 0;
    int cache[2001][2001];

public:
    int canCross(vector<int> &stones)
    {
        n = stones.size();

        memset(cache, -1, sizeof(cache));

        if (stones[1] != 1)
            return false;

        for (int i = 0; i < n; i++)
        {
            Map[stones[i]] = i;
        }
        return Solve(stones, 0, 0);
    }

private:
    bool Solve(vector<int> stones, int curStoneIndex, int previousJump)
    {
        if (curStoneIndex == n - 1)
        {
            return true;
        }

        if (cache[curStoneIndex][previousJump] != -1)
            return cache[curStoneIndex][previousJump] == 1;

        bool res = false;

        for (int nextJump = previousJump - 1; nextJump <= previousJump + 1; nextJump++)
        {

            if (nextJump > 0)
            {
                int nextStone = stones[curStoneIndex] + nextJump;

                // find next-jump is exists
                if (Map.find(nextStone) != Map.end())
                {
                    // Solve(arr, nextStoneIndex, last-jump)
                    res = res || Solve(stones, Map[nextStone], nextJump);
                }
            }
        }

        return cache[curStoneIndex][previousJump] = res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 3, 5, 6, 8, 12, 17};
    cout << obj.canCross(arr) << endl;
    return 0;
}