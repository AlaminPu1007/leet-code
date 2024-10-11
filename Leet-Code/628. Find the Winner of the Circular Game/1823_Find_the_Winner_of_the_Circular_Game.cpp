#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findTheWinner(int n, int k)
  {
    deque<int> dq;

    for (int i = 1; i <= n; i++)
      dq.push_back(i);

    while (dq.size() > 1)
    {
      int i = k - 1;
      while (i--)
      {
        int value = dq.front();
        dq.pop_front();

        dq.push_back(value);
      }

      dq.pop_front();
    }

    return dq.front();
  }
};

int main(void)
{
  Solution obj;
  int n = 5, k = 2;
  cout << obj.findTheWinner(n, k) << endl;
  return 0;
}