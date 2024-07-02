#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int n = -1, m = -1;

public:
  int snakesAndLadders(vector<vector<int>> &board)
  {
    n = board.size(), m = board[0].size();
    queue<int> q;
    vector<vector<int>> vis(n, vector<int>(m, 0));

    q.push(1);
    vis[n - 1][0] = 1;

    int res = 0;

    while (!q.empty())
    {
      int size = q.size();
      while (size--)
      {
        int num = q.front();
        q.pop();

        if (num == (n * n))
          return res;

        for (int i = 1; i <= 6; i++)
        {
          int nextStep = (num + i);

          if (nextStep > (n * n))
            continue;

          auto item = getRowCol(nextStep);
          int row = item.first, col = item.second;

          if (vis[row][col] == 1)
            continue;

          vis[row][col] = 1;

          if (board[row][col] == -1)
            q.push(nextStep);

          else
            q.push(board[row][col]);
        }
      }
      res++;
    }
    return -1;
  }

private:
  pair<int, int> getRowCol(int value)
  {

    int row = n - 1 - (value - 1) / n;
    int col = ((value - 1) % n);

    if ((n % 2 == 1 && row % 2 == 1) || (n % 2 == 0 && row % 2 == 0))
      col = n - 1 - col;

    return make_pair(row, col);
  }
};

int main(void)
{
  Solution obj;
  // vector<vector<int>> grid = {
  //     {-1, -1, -1, -1, -1, -1},
  //     {-1, -1, -1, -1, -1, -1},
  //     {-1, -1, -1, -1, -1, -1},
  //     {-1, 35, -1, -1, 13, -1},
  //     {-1, -1, -1, -1, -1, -1},
  //     {-1, 15, -1, -1, -1, -1}};
  // vector<vector<int>> grid = {{-1, -1}, {-1, 3}};
  vector<vector<int>> grid = {{1, 1, -1}, {1, 1, 1}, {-1, 1, 1}};

  cout << obj.snakesAndLadders(grid) << endl;

  return 0;
}