#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, pair<int, int>> IPair;
    vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

public:
    int minCost(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        priority_queue<IPair, vector<IPair>, greater<IPair>> pq; // {cost, {row, col}}
        vector<vector<int>> costMatrix(n, vector<int>(m, INT_MAX));

        int del_row[] = {0, 1, 0, -1};
        int del_col[] = {1, 0, -1, 0};

        // insert into queue
        pq.push({0, {0, 0}});

        costMatrix[0][0] = 0;

        while (pq.size())
        {
            // get top most value from pq
            auto item = pq.top();

            int cost = item.first;
            int row = item.second.first;
            int col = item.second.second;

            // removed item from pq
            pq.pop();

            // If this cell is already processed with a smaller cost, skip it
            if (cost > costMatrix[row][col])
                continue;

            // iterate over the neighbour by 4 directions
            for (int i = 0; i < 4; i++)
            {
                int new_row = dirs[i][0] + row;
                int new_col = dirs[i][1] + col;

                // validated boundaries
                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m)
                {
                    // if change the directions then add cost 1
                    int new_cost = cost + (i != (grid[row][col] - 1) ? 1 : 0);

                    if (costMatrix[new_row][new_col] > new_cost)
                    {
                        // update costMatrix with new lowest cost
                        costMatrix[new_row][new_col] = new_cost;

                        // put this index into pq
                        pq.push({new_cost, {new_row, new_col}});
                    }
                }
            }
        }

        return costMatrix[n - 1][m - 1];
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{1, 1, 1, 1}, {2, 2, 2, 2}, {1, 1, 1, 1}, {2, 2, 2, 2}};

    cout << obj.minCost(grid) << endl;
    return 0;
}