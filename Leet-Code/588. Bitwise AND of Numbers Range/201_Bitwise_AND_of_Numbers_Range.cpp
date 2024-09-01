#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int rangeBitwiseAnd(int left, int right)
  {
    int count = 0;
    while (left != right)
    {
      count++;
      left = (left >> 1);
      right = (right >> 1);
    }

    return (left << count);
  }
};

int main(void)
{
  Solution obj;
  int left = 5, right = 7;
  cout << obj.rangeBitwiseAnd(left, right) << endl;
  return 0;
}