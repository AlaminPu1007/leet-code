#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxUniqueSplit(string s)
  {
    unordered_set<string> st;
    return DFS(0, s, st);
  }

private:
  int DFS(int i, string &s, unordered_set<string> &st)
  {
    if (i == s.size())
      return 0;

    int res = INT_MIN;

    for (int j = i; j < s.size(); j++)
    {
      string str = s.substr(i, j - i + 1);

      if (st.find(str) != st.end())
        continue;

      cout << str << " ";

      // keep trap of current sub-str
      st.insert(str);

      res = max(res, 1 + DFS(j + 1, s, st));

      // removed it from set
      st.erase(str);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string str = "ababccc";
  cout << obj.maxUniqueSplit(str) << endl;
  return 0;
}