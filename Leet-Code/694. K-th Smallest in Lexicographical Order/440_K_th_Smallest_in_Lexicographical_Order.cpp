/**
 * This solution will give us "Time Limit Exceeded".
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  int ans = -1;

public:
  int findKthNumber(int n, int k)
  {
    DFS(n, k, 0);
    return ans;
  }

private:
  void DFS(int n, int &k, int i)
  {
    if (i > n)
      return;

    if (k == 0)
    {
      ans = i;
      return;
    }

    // Decrement k, and if it's 0, we've found the k-th number
    k--;

    for (int j = 0; j <= 9; j++)
    {
      if (i == 0 && j == 0)
        continue;

      DFS(n, k, i * 10 + j);

      if (ans != -1) // Early exit when the answer is found
        return;
    }
  }
};

int main(void)
{
  Solution obj;
  int n = 5202363, k = 3078011;
  cout << obj.findKthNumber(n, k) << endl;
  return 0;
}