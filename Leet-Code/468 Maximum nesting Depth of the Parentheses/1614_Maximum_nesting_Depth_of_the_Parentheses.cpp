#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxDepth(string s)
  {
    int n = s.size();
    int count = 0, res = 1;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '(')
      {
        count++;
      }
      else if (s[i] == ')')
      {
        count--;
      }
      res = max(res, count);
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string s = "(1+(2*3)+((8)/4))+1";
  cout << obj.maxDepth(s) << endl;
  return 0;
}