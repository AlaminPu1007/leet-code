#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int n = 0;

public:
  int minSteps(int n)
  {
    if (n == 1)
      return 0;

    this->n = n;

    // DFS(copy + pase, paste)
    // first step is always a Copy All operation
    return 1 + DFS(1, 1);
  }

private:
  int DFS(int curLen, int pastLen)
  {
    // handle the base case
    if (curLen == n)
      return 0;

    if (curLen > n)
      return 10000;

    // copy + pase need 2 cost, and curLen will be next paste length
    int copyWithPaste = 2 + DFS(curLen * 2, curLen);

    int onlyPaste = 1 + DFS(curLen + pastLen, pastLen);

    return min(copyWithPaste, onlyPaste);
  }
};

int main(void)
{
  int n = 5;
  Solution obj;
  cout << obj.minSteps(n) << endl;
  return 0;
}