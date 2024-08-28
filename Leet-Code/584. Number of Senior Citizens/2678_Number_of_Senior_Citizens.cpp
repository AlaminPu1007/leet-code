#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int countSeniors(vector<string> &details)
  {
    int n = details.size();
    int res = 0;

    for (int i = 0; i < n; i++)
    {
      int age = (int)(details[i][11] - '0') * 10 + (int)(details[i][12] - '0');
      if (age > 60)
        res++;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<string> arr = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
  cout << obj.countSeniors(arr) << endl;
  return 0;
}