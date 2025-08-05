/**
 * This solution will give us "Time Limit Exceeded"
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int tallestBillboard(vector<int> &rods)
    {
        int n = rods.size();
        unordered_map<string, int> cache;
        return Solved(0, 0, 0, rods, cache);
    }

private:
    int Solved(int i, int l1, int l2, vector<int> &rods, unordered_map<string, int> &cache)
    {
        if (i >= rods.size())
        {
            if (l1 == l2)
                return l1;
            return 0;
        }

        string key = to_string(i) + "_" + to_string(l1) + "_" + to_string(l2);

        if (cache.find(key) != cache.end())
            return cache[key];

        int not_picking = Solved(i + 1, l1, l2, rods, cache);
        int pick_l1 = Solved(i + 1, l1 + rods[i], l2, rods, cache);
        int pick_l2 = Solved(i + 1, l1, l2 + rods[i], rods, cache);

        return cache[key] = max({not_picking, pick_l1, pick_l2});
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 6};
    cout << obj.tallestBillboard(arr) << endl;

    return 0;
}