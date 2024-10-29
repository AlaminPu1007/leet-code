/**
 * This problem will give us "Time Limit Exceeded"
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> sumPrefixScores(vector<string> &words)
  {
    unordered_map<string, int> Map;
    vector<int> res;

    for (auto item : words)
    {
      string temp = "";
      for (int i = 0; i < item.size(); i++)
      {
        temp += item[i];
        Map[temp]++;
      }
    }

    for (auto item : words)
    {
      string temp = "";
      int ans = 0;
      for (int i = 0; i < item.size(); i++)
      {
        temp += item[i];

        if (Map.find(temp) != Map.end())
        {
          ans += Map[temp];
        }
      }

      res.push_back(ans);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<string> arr = {"abc", "ab", "bc", "b"};
  vector<int> res = obj.sumPrefixScores(arr);

  for (auto item : res)
  {
    cout << item << " ";
  }
  return 0;
}