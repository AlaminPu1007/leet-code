#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findCenter(vector<vector<int>> &edges)
  {
    unordered_map<int, int> Map;

    for (auto item : edges)
    {
      Map[item[0]]++;
      Map[item[1]]++;
    }

    for (auto item : Map)
    {
      if (item.second == edges.size())
        return item.first;
    }
    return -1;
  }
};

int main(void)
{
  Solution obj;
  vector<vector<int>> arr = {{1, 2}, {5, 1}, {1, 3}, {1, 4}};
  cout << obj.findCenter(arr) << endl;
  return 0;
}