#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
    {
        int n = isWater.size(), m = isWater[0].size();

        vector<vector<int>> visited(n, vector<int>(m, -1));
        queue<pair<int, int>> q;

        // Add all water cells to the queue and set their height to 0
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (isWater[i][j])
                {
                    q.push({i, j});
                    visited[i][j] = 0;
                }
            }
        }
        // Horizontal movement: right, left, down, up
        int del_row[] = {0, 0, 1, -1};

        // Vertical movement corresponding to dx
        int del_col[] = {1, -1, 0, 0};

        int levelHeights = 1;

        while (q.size())
        {
            int size = q.size();

            for (int i = 0; i < size; i++)
            {
                auto item = q.front();
                int row = item.first;
                int col = item.second;

                // removed from queue
                q.pop();

                // iterate over the 4 direction of the grid
                for (int dir = 0; dir < 4; dir++)
                {
                    int new_row = del_row[dir] + row;
                    int new_col = del_col[dir] + col;

                    if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && visited[new_row][new_col] == -1)
                    {
                        // insert into queue
                        q.push({new_row, new_col});

                        // mark as visited
                        visited[new_row][new_col] = levelHeights;
                    }
                }
            }
            // increment level by one for next level
            levelHeights++;
        }

        return visited;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> grid = {{0, 0, 1}, {1, 0, 0}, {0, 0, 0}};
    vector<vector<int>> res = obj.highestPeak(grid);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}