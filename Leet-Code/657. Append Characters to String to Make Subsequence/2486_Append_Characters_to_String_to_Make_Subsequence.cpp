#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int appendCharacters(string s, string t)
  {
    int n = s.size(), m = t.size();
    int i = 0, j = 0;

    while (i < n && j < m)
    {
      if (s[j] == t[i])
      {
        i++;
      }
      j++;
    }

    return (m - j);
  }
};

int main(void)
{
  Solution obj;
  string s = "lbg", t = "g";
  cout << obj.appendCharacters(s, t) << endl;
  return 0;
}