#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<string> uncommonFromSentences(string s1, string s2)
  {
    unordered_map<string, int> Map;
    string s = s1 + " " + s2;
    stringstream str(s);

    vector<string> res;
    string word;

    while (str >> word)
    {
      Map[word]++;
    }

    for (auto item : Map)
    {
      if (item.second == 1)
      {
        res.push_back(item.first);
      }
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string s1 = "abcd def abcd xyz", s2 = "ijk def ijk";
  vector<string> res = obj.uncommonFromSentences(s1, s2);

  for (auto item : res)
    cout << item << " ";

  return 0;
}