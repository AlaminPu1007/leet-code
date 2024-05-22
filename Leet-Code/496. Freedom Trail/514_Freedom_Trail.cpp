#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findRotateSteps(string ring, string key)
    {
        unordered_map<string, int> cache;
        return DFS(0, 0, ring, key, cache);
    }

private:
    int DFS(int curIndex, int keyIndex, string ring, string key, unordered_map<string, int> &cache)
    {
        if (key.length() == keyIndex)
            return 0;

        string cacheKey = to_string(curIndex) + ',' + to_string(keyIndex);

        if (cache.find(cacheKey) != cache.end())
            return cache[cacheKey];

        int res = INT_MAX;

        for (int i = 0; i < ring.size(); i++)
        {
            if (key[keyIndex] == ring[i])
            {
                int min_dist = min(
                    abs(i - curIndex),                     // get the distance from anti-clock wise
                    (int)(ring.size() - abs(i - curIndex)) // get the distance from reverse order
                );

                res = min(res, min_dist + 1 + DFS(i, keyIndex + 1, ring, key, cache));
            }
        }

        cache[cacheKey] = res;
        return res;
    }
};

int main(void)
{
    Solution obj;
    string ring = "godding", key = "gd";
    cout << obj.findRotateSteps(ring, key) << endl;
    return 0;
}