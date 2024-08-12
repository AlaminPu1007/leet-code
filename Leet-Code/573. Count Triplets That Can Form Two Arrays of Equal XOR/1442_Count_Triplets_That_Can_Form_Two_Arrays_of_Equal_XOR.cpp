#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int countTriplets(vector<int> &arr)
  {
    int n = arr.size();
    int res = 0;

    for (int i = 0; i < n; i++)
    {
      int xorA = 0;
      for (int j = i + 1; j < n; j++)
      {
        xorA ^= arr[j - 1];

        int xorB = 0;

        for (int k = j; k < n; k++)
        {
          xorB ^= arr[k];

          if (xorA == xorB)
            res++;
        }
      }
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {2, 3, 1, 6, 7};
  cout << obj.countTriplets(arr) << endl;
  return 0;
}