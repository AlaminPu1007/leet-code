#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        int n = mat.size(), m = mat[0].size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        unordered_map<int, int> Map;
        vector<int> res;

        for (int i = 0; i < n; i++)
        {
            int countOne = 0;
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j])
                    countOne++;
            }
            Map[i] = countOne;
        }

        for (auto item : Map)
            pq.push({item.second, item.first});

        while (!pq.empty())
        {
            int row = pq.top().first;
            int col = pq.top().second;
            if (k-- > 0)
            {
                res.push_back(col);
            }
            pq.pop();
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 0},
                                {1, 0, 0, 0, 0},
                                {1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 1}};
    vector<int> res = obj.kWeakestRows(grid, 3);
    for (auto item : res)
    {
        cout << item << " ";
    }
    return 0;
}