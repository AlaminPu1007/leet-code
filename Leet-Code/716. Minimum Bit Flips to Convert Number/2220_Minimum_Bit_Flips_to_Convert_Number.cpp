#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minBitFlips(int start, int goal)
  {
    int count = 0;

    while (start > 0 || goal > 0)
    {
      if ((start & 1) != (goal & 1))
        count++;
      // shift both number right by 1
      goal >>= 1;
      start >>= 1;
    }

    return count;
  }
};

int main(void)
{
  Solution obj;
  cout << obj.minBitFlips(10, 7) << endl;
  return 0;
}