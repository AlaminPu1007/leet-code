#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int robotSim(vector<int> &commands, vector<vector<int>> &obstacles)
  {
    set<pair<int, int>> st;

    for (auto item : obstacles)
    {
      st.insert({item[0], item[1]});
    }

    int x = 0, y = 0, d = 0;
    int res = 0;

    vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // N, E, S, W

    for (auto item : commands)
    {
      // Turn right 90 degrees.
      if (item == -1)
        d = (d + 1) % 4;

      // Turn left 90 degrees.
      if (item == -2)
        d = (d + 3) % 4; // Adding 3 is equivalent to subtracting 1 in modulo 4

      else
      {
        int i = item;

        while (i > 0)
        {
          int del_x = x + dir[d][0]; // Use d for direction
          int del_y = y + dir[d][1]; // Use y for y-coordinate

          if (st.find({del_x, del_y}) != st.end())
            break;

          x = del_x;
          y = del_y;
          res = max(res, ((x * x) + (y * y)));

          i--;
        }
      }
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> c = {4, -1, 4, -2, 4};
  vector<vector<int>> obstacles = {{2, 4}};
  cout << obj.robotSim(c, obstacles) << endl;
  return 0;
}