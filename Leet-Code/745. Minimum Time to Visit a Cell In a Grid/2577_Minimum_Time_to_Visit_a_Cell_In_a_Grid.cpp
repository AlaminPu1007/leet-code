#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, pair<int, int>> IPAIR; // {time, {row, col}}

public:
    int minimumTime(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();

        if (min(grid[0][1], grid[1][0]) > 1)
            return -1;

        // define a priority queue
        priority_queue<IPAIR, vector<IPAIR>, greater<IPAIR>> pq;
        vector<vector<int>> visit(n, vector<int>(m, 0));

        int del_row[] = {-1, 0, 1, 0}, del_col[] = {0, 1, 0, -1};

        // initialize queue with source node
        pq.push({0, {0, 0}});

        // mark as visited this grid
        visit[0][0] = 1;

        while (!pq.empty())
        {
            auto item = pq.top();

            // removed item from priority queue
            pq.pop();

            int time = item.first;
            int row = item.second.first, col = item.second.second;

            if (row == n - 1 && col == m - 1)
                return time;

            // iterate over the four directions of the gid
            for (int i = 0; i < 4; i++)
            {
                int new_row = del_row[i] + row;
                int new_col = del_col[i] + col;

                if (isValid(n, m, new_row, new_col) && !visit[new_row][new_col])
                {
                    // mark as visited
                    visit[new_row][new_col] = 1;

                    int wait = abs(grid[new_row][new_col] - time) % 2 == 0 ? 1 : 0;
                    int new_time = max(grid[new_row][new_col] + wait, time + 1);

                    // insert into priority queue
                    pq.push({new_time, {new_row, new_col}});
                }
            }
        }

        return -1;
    }

private:
    bool isValid(int n, int m, int row, int col)
    {
        return row >= 0 && row < n && col >= 0 && col < m;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{0, 1, 3, 2}, {5, 1, 2, 5}, {4, 3, 8, 6}};

    cout << obj.minimumTime(grid) << endl;
    return 0;
}