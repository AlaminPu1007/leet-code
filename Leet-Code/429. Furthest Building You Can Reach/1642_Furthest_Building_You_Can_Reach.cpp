#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int furthestBuilding(vector<int> &heights, int bricks, int ladders)
  {
    int n = heights.size();

    priority_queue<int> pq;

    for (int i = 0; i < n - 1; i++)
    {
      int diff = (heights[i + 1] - heights[i]);

      if (diff < 0)
        continue;

      bricks -= diff;

      pq.push(diff);

      if (bricks < 0)
      {
        if (ladders == 0)
          return i;

        int value = pq.top();
        pq.pop();

        bricks += value;

        ladders -= 1;
      }
    }

    return n - 1;
  }
};

int main(void)
{
  Solution obj;
  vector<int> heights = {4, 2, 7, 6, 9, 14, 12};
  int bricks = 5, ladders = 1;
  cout << obj.furthestBuilding(heights, bricks, ladders) << endl;
  return 0;
}