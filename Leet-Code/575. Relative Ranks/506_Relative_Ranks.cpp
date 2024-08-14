#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<string> findRelativeRanks(vector<int> &score)
  {
    int n = score.size();
    vector<string> res(n);

    vector<int> temp(score.begin(), score.end());

    unordered_map<int, int> scoreToIndex;

    for (int i = 0; i < n; i++)
      scoreToIndex[score[i]] = i;

    sort(temp.begin(), temp.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
      if (i == 0)
        res[scoreToIndex[temp[i]]] = "Gold Medal";

      else if (i == 1)
        res[scoreToIndex[temp[i]]] = "Silver Medal";

      else if (i == 2)
        res[scoreToIndex[temp[i]]] = "Bronze Medal";

      else
        res[scoreToIndex[temp[i]]] = to_string(i + 1);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {5, 4, 3, 2, 1};
  vector<string> res = obj.findRelativeRanks(arr);
  for (auto item : res)
    cout << item << " ";
  return 0;
}