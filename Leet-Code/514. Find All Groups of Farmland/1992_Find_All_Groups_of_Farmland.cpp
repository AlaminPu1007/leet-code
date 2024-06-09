#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int n = 0;
    int m = 0;

    // The four directions in which traversal will be done.
    int dirs[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

public:
    vector<vector<int>> findFarmland(vector<vector<int>> &land)
    {
        vector<vector<int>> res;

        n = land.size(), m = land[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (land[i][j] == 1)
                {
                    int r2 = -1, c2 = -1;
                    DFS(land, i, j, r2, c2);

                    res.push_back({i, j, r2, c2});
                }
            }
        }

        return res;
    }

private:
    void DFS(vector<vector<int>> &land, int i, int j, int &r2, int &c2)
    {
        // mark land as a visited
        land[i][j] = 0;

        r2 = max(r2, i);
        c2 = max(c2, j);

        for (auto dir : dirs)
        {
            // Neighbor cell coordinates.
            int newRow = i + dir[0];
            int newCol = j + dir[1];

            if (isWithinFarm(newRow, newCol, n, m) && land[newRow][newCol] == 1)
            {
                DFS(land, newRow, newCol, r2, c2);
            }
        }
    }

private:
    // Returns true if the coordinate is within the boundary of the matrix.
    bool isWithinFarm(int x, int y, int N, int M)
    {
        return x >= 0 && x < N && y >= 0 && y < M;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 0, 0}, {0, 1, 1}, {0, 1, 1}};

    vector<vector<int>> ans = obj.findFarmland(arr);

    for (auto item : ans)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
}