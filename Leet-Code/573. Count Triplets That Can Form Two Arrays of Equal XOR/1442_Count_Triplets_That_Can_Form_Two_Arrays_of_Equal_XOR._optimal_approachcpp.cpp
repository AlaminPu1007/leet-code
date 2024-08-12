#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int countTriplets(vector<int> &arr)
  {
    int n = arr.size();
    int res = 0;

    vector<int> prefixXor(arr.begin(), arr.end());
    prefixXor.insert(prefixXor.begin(), 0);

    // calculate xor of i+1 to n
    for (int i = 1; i < prefixXor.size(); i++)
      prefixXor[i] ^= prefixXor[i - 1];

    for (int i = 0; i < prefixXor.size(); i++)
    {
      for (int j = i + 1; j < prefixXor.size(); j++)
      {
        if (prefixXor[i] == prefixXor[j])
          res += (j - i - 1);
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