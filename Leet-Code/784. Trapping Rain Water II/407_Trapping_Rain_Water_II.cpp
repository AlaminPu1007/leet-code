#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, pair<int, int>> IPair;

public:
    int trapRainWater(vector<vector<int>> &heightMap)
    {
        int n = heightMap.size(), m = heightMap[0].size();
        int res = 0;

        // initialized a priority queue for minHeap
        priority_queue<IPair, vector<IPair>, greater<>> pq;

        // initialized a visited 2D array
        vector<vector<int>> visited(n, vector<int>(m, 0));

        // insert into priority queue with boundary cells

        // Add the first and last column cells to the boundary and mark them as visited
        for (int i = 0; i < n; i++)
        {
            pq.push({heightMap[i][0], {i, 0}});
            pq.push({heightMap[i][m - 1], {i, m - 1}});

            // Mark left and right boundary cells as visited
            visited[i][0] = visited[i][m - 1] = 1;
        }

        // Add the first and last row cells to the boundary and mark them as visited
        for (int i = 0; i < m; i++)
        {
            pq.push({heightMap[0][i], {0, i}});
            pq.push({heightMap[n - 1][i], {n - 1, i}});

            // Mark top and bottom boundary cells as visited
            visited[0][i] = visited[n - 1][i] = 1;
        }

        int del_row[] = {-1, 0, +1, 0}; // { top, right, bottom, left }
        int del_col[] = {0, +1, 0, -1};

        while (pq.size())
        {
            auto item = pq.top();
            pq.pop();

            int height = item.first;
            int row = item.second.first;
            int col = item.second.second;

            // traverse the 4 neighbor nodes
            for (int i = 0; i < 4; i++)
            {
                int newRow = row + del_row[i];
                int newCol = col + del_col[i];

                // check validated
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !visited[newRow][newCol])
                {
                    res += max(height - heightMap[newRow][newCol], 0);

                    // insert into queue
                    pq.push({max(height, heightMap[newRow][newCol]), {newRow, newCol}});

                    // mark as visited also
                    visited[newRow][newCol] = 1;
                }
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 4, 3, 1, 3, 2}, {3, 2, 1, 3, 2, 4}, {2, 3, 3, 2, 3, 1}};

    cout << obj.trapRainWater(arr) << endl;
    return 0;
}