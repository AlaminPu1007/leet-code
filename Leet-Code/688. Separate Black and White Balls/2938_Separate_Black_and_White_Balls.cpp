#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long minimumSteps(string s)
  {
    long long res = 0;
    long long count = 0;

    for (auto ch : s)
    {
      if (ch == '1')
        count++;

      else
        res += count;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string s = "11010";
  cout << obj.minimumSteps(s) << endl;
  return 0;
}