/*
  Without cache we will get "Time Limit Exceeded"
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minHeightShelves(vector<vector<int>> &books, int shelfWidth)
  {
    int n = books.size();
    vector<int> cache(n + 1, -1);
    return DFS(0, books, n, shelfWidth, cache);
  }

private:
  int DFS(int i, vector<vector<int>> &books, int n, int shelfWidth, vector<int> &cache)
  {
    // handle the base case
    if (i >= n)
      return 0;

    if (cache[i] != -1)
      return cache[i];

    int res = INT_MAX;
    int sudoWidth = shelfWidth, max_height = 0;

    for (int j = i; j < n; j++)
    {
      int width = books[j][0];
      int height = books[j][1];

      if (sudoWidth < width)
        break;

      sudoWidth -= width;
      max_height = max(max_height, height);
      res = min(res, DFS(j + 1, books, n, shelfWidth, cache) + max_height);
    }

    return cache[i] = res;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> arr = {{1, 1}, {2, 3}, {2, 3}, {1, 1}, {1, 1}, {1, 1}, {1, 2}};
  int shelfWidth = 4;

  cout << obj.minHeightShelves(arr, shelfWidth) << endl;
  return 0;
}