#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int duplicate = 0, missing = 0;

        unordered_map<int, int> Map;

        for (auto item : grid)
        {
            for (auto it : item)
                Map[it]++;
        }

        for (int i = 1; i <= n * n; i++)
        {
            if (Map.find(i) == Map.end())
                missing = i;

            else if (Map[i] == 2)
                duplicate = i;
        }

        return {duplicate, missing};
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};

    vector<int> res = obj.findMissingAndRepeatedValues(grid);

    cout << res[0] << " " << res[1] << endl;

    return 0;
}