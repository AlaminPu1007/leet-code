#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int chalkReplacer(vector<int> &chalk, int k)
  {
    int n = chalk.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
      sum += chalk[i];
      // any case the summation would be greater than k, no further summation is required
      if (sum > k)
        break;
    }

    // completed as much as as rounded possible to completed by module it
    k %= sum;

    for (int i = 0; i < n; i++)
    {
      if (k < chalk[i])
        return i;

      k -= chalk[i];
    }
    return 0;
  }
};

int main(void)
{
  Solution obj;
  vector<int> chalk = {5, 1, 5};
  int k = 22;
  cout << obj.chalkReplacer(chalk, k) << endl;
  return 0;
}