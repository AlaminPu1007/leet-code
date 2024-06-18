#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numSteps(string s)
  {
    int count = 0;

    while (s.size() > 1)
    {
      int n = s.size();

      // if right most bit is '0' means the number is even
      if (s[n - 1] == '0')
        dividedByTwo(s);
      else
        addByOne(s);

      count++;
    }

    return count;
  }

private:
  // this method will help us to divided nums by 2
  // if we deleted right most bit, it's equivalent `nums / 2`
  void dividedByTwo(string &s)
  {
    s.pop_back();
  }

private:
  // this method will help us to add 1 in given string
  void addByOne(string &s)
  {
    int i = s.size() - 1;

    // Keep updating the right most all 1's into 0
    // until get the first occur of '0'
    while (i >= 0 && s[i] == '1')
    {
      s[i] = '0';
      i--;
    }

    // if i become to less than 0, add an extra 1 into left most bit
    if (i < 0)
      s = '1' + s;

    else
      s[i] = '1';
  }
};

int main(void)
{
  Solution obj;
  string str = "1101";
  cout << obj.numSteps(str) << endl;
  return 0;
}