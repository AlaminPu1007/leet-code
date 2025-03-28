#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int del_row[4] = {-1, 0, +1, 0};
    int del_col[4] = {0, +1, 0, -1};

public:
    int largestIsland(vector<vector<int>> &grid)
    {
        // the grid is always n * n
        int n = grid.size();

        // this will hold each label is unique island with their sizes
        unordered_map<int, int> Size;

        // keep trap of visited cell
        vector<vector<int>> visited(n, vector<int>(n, 0));

        int label = 2;

        // precompute the areas
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    // this dfs will return the size of the current island
                    Size[label] = DFS(i, j, n, label, grid, visited);

                    // ensure label always uniqueue for next island
                    label++;
                }
            }
        }

        // Try to flipping every water cell into 1
        // and calculate max possible island
        int res = 0;

        // initially set result with max island
        // ex: there is a multiple test case who have any water cell
        for (auto item : Size)
            res = max(res, item.second);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 0)
                {
                    res = max(res, connectIsland(i, j, n, grid, Size));
                }
            }
        }

        return res;
    }

private:
    int connectIsland(int i, int j, int n, vector<vector<int>> &grid, unordered_map<int, int> &Size)
    {
        // Since we are flipping a 0 to 1
        int res = 1;

        // if we used 2D array here that will cause to duplicate count same island
        // Track unique adjacent island labels
        unordered_set<int> uniqueIslands;

        for (int dir = 0; dir < 4; dir++)
        {
            int newRow = i + del_row[dir];
            int newCol = j + del_col[dir];

            if (isSafe(newRow, newCol, n) && grid[newRow][newCol] > 1)
            {
                // Store unique island labels
                uniqueIslands.insert(grid[newRow][newCol]);
            }
        }

        for (int island : uniqueIslands)
            // Sum only unique island sizes
            res += Size[island];

        return res;
    }

private:
    int DFS(int i, int j, int n, int label, vector<vector<int>> &grid, vector<vector<int>> &visited)
    {
        if (!isSafe(i, j, n) || grid[i][j] != 1 || visited[i][j])
            return 0;

        grid[i][j] = label;
        visited[i][j] = 1;

        // count the size of the current island
        int size = 1;

        // iterate over the 4 adjacency cell
        for (int dir = 0; dir < 4; dir++)
        {
            int newRow = i + del_row[dir];
            int newCol = j + del_col[dir];

            size += DFS(newRow, newCol, n, label, grid, visited);
        }

        return size;
    }

private:
    bool isSafe(int i, int j, int n)
    {
        return i >= 0 && i < n && j >= 0 && j < n;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{1, 1}, {1, 0}};

    cout << obj.largestIsland(grid) << endl;

    return 0;
}