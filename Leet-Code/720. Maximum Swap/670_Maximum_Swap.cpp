#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maximumSwap(int num)
  {
    string str = to_string(num);
    int n = str.length();
    vector<pair<int, int>> maxSuffix(n);

    int maxItem = 0, itemIndex = -1;

    for (int i = n - 1; i >= 0; i--)
    {
      int value = str[i] - '0';

      if (maxItem < value)
      {
        maxItem = value;
        itemIndex = i;
      }

      maxSuffix[i] = {maxItem, itemIndex};
    }

    if (itemIndex == -1)
      return num;

    for (int i = 0; i < n; i++)
    {
      int value = str[i] - '0';
      if (value < maxSuffix[i].first)
      {
        swap(str[maxSuffix[i].second], str[i]);
        return stoi(str);
      }
    }

    return num;
  }
};

int main(void)
{
  Solution obj;
  cout << obj.maximumSwap(98368) << endl;
  return 0;
}