#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxCandies(vector<int> &status, vector<int> &candies, vector<vector<int>> &keys, vector<vector<int>> &containedBoxes, vector<int> &initialBoxes)
    {
        int res = 0;
        int n = candies.size();

        unordered_set<int> foundBox, visited;

        for (auto item : initialBoxes)
        {
            res += Solve(item, status, candies, keys, containedBoxes, foundBox, visited);
        }

        return res;
    }

private:
    int Solve(int node, vector<int> &status, vector<int> &candies, vector<vector<int>> &keys, vector<vector<int>> &containedBoxes, unordered_set<int> &foundBox, unordered_set<int> &visited)
    {
        if (visited.count(node))
            return 0;

        if (!status[node])
        {
            // hold this as a foundBox for future use cases
            foundBox.insert(node);

            return 0;
        }

        // now mark this as a visited
        visited.insert(node);

        int res = candies[node];

        // iterate over the contained-box or adjacency list
        for (auto nei : containedBoxes[node])
        {
            res += Solve(nei, status, candies, keys, containedBoxes, foundBox, visited);
        }

        // iterate over the keys to get if possible to get key of closed boxes
        for (auto nei : keys[node])
        {
            // update it's status by 1 (to open)
            status[nei] = 1;

            // if already in found box then count it's candy as well
            if (foundBox.count(nei))
            {
                res += Solve(nei, status, candies, keys, containedBoxes, foundBox, visited);
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> status = {1, 0, 1, 0}, candies = {7, 5, 4, 100};
    vector<vector<int>> keys = {{}, {}, {1}, {}}, containedBoxes = {{1, 2}, {3}, {}, {}};
    vector<int> initialBoxes = {0};

    cout << obj.maxCandies(status, candies, keys, containedBoxes, initialBoxes) << endl;

    return 0;
}