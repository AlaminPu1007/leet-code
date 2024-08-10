#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numWaterBottles(int numBottles, int numExchange)
  {
    int res = 0, empty = 0;

    while (numBottles > 0)
    {
      res += numBottles;
      empty += numBottles;

      numBottles = (int)(empty / numExchange);
      empty = empty % numExchange;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  cout << obj.numWaterBottles(9, 3) << endl;
  return 0;
}