#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> iPair;

class Solution
{
public:
  int maximumSafenessFactor(vector<vector<int>> &grid)
  {
    int n = grid.size(), m = grid[0].size();

    priority_queue<iPair> pq;
    queue<iPair> q;

    vector<vector<int>> sudoGrid(n, vector<int>(m, -1));
    vector<vector<int>> visit(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (grid[i][j] == 1)
        {
          q.push({0, {i, j}});
          sudoGrid[i][j] = 0;
        }
      }
    }

    int del_row[] = {-1, 0, 1, 0};
    int del_col[] = {0, 1, 0, -1};

    while (!q.empty())
    {
      int level = q.front().first;
      int row = q.front().second.first;
      int col = q.front().second.second;

      q.pop();

      for (int i = 0; i < 4; i++)
      {
        int new_row = del_row[i] + row;
        int new_col = del_col[i] + col;

        if (new_row >= 0 && new_col >= 0 && new_row < n && new_col < m && sudoGrid[new_row][new_col] == -1)
        {
          sudoGrid[new_row][new_col] = level + 1;
          q.push({level + 1, {new_row, new_col}});
        }
      }
    }

    // put source node into priority_queue
    pq.push({sudoGrid[0][0], {0, 0}});
    visit[0][0] = 1;

    while (!pq.empty())
    {
      int value = pq.top().first;
      int row = pq.top().second.first;
      int col = pq.top().second.second;

      // removed item from pq
      pq.pop();

      if (row == n - 1 && col == m - 1)
        return value;

      // traverse all neighbor
      for (int i = 0; i < 4; i++)
      {
        int new_row = del_row[i] + row;
        int new_col = del_col[i] + col;

        if (new_row >= 0 && new_col >= 0 && new_row < n && new_col < m && visit[new_row][new_col] == 0)
        {
          pq.push({min(value, sudoGrid[new_row][new_col]), {new_row, new_col}});
          visit[new_row][new_col] = 1;
        }
      }
    }

    for (auto item : sudoGrid)
    {
      for (auto it : item)
        cout << it << " ";
      cout << endl;
    }

    return -1;
  }
};

int main(void)
{
  Solution obj;
  // vector<vector<int>> grid = {{0, 0, 0, 1}, {0, 0, 0, 0}, {0, 0, 0, 0}, {1, 0, 0, 0}};
  vector<vector<int>> grid = {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                              {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0}};
  cout << obj.maximumSafenessFactor(grid) << endl;
  return 0;
}