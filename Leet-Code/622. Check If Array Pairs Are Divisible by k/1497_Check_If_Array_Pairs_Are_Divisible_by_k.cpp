#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool canArrange(vector<int> &arr, int k)
  {
    unordered_map<int, int> Map;

    for (auto item : arr)
    {
      Map[(item % k + k) % k]++; // handle negative value
    }

    // find all pairs, this approach is similar two sums problems
    for (auto item : arr)
    {
      int rem = (item % k + k) % k;
      int nextItem = (k - rem);

      // if a odd number of 0 is present, that means there is no way to make paris
      // ex:[5, 11], 5 % 5 = 0,  11 % 5 = 1
      if (rem == 0)
      {
        if (Map[rem] % 2 == 1)
          return false;
      }
      // they should have equal no of counter or frequency
      else if (Map[rem] != Map[nextItem])
        return false;
    }

    return true;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9};
  int k = 5;
  cout << obj.canArrange(arr, k) << endl;
  return 0;
}