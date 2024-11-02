#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool lemonadeChange(vector<int> &bills)
  {
    int n = bills.size();
    int five = 0, ten = 0;

    for (int i = 0; i < n; i++)
    {
      if (bills[i] == 5)
        five++;

      if (bills[i] == 10)
        ten++;

      int change = (bills[i] - 5);

      if (change == 5)
      {
        if (five)
          five--;

        else
          return false;
      }
      else if (change == 15)
      {
        if (five && ten)
        {
          five--;
          ten--;
        }
        else if (five >= 3)
          five -= 3;
        else
          return false;
      }
    }

    return true;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {5, 5, 5, 20};
  cout << obj.lemonadeChange(arr) << endl;
  return 0;
}