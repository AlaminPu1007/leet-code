#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> diffWaysToCompute(string expression)
  {
    return backTrack(0, expression.size() - 1, expression);
  }

private:
  vector<int> backTrack(int left, int right, string &expression)
  {
    vector<int> res;

    for (int i = left; i <= right; i++)
    {
      char op = expression[i];

      if (op == '+' || op == '-' || op == '*')
      {
        vector<int> temp1 = backTrack(left, i - 1, expression);
        vector<int> temp2 = backTrack(i + 1, right, expression);

        // merge two array
        for (int a : temp1)
        {
          for (int b : temp2)
          {
            if (op == '+')
              res.push_back(a + b);
            else if (op == '-')
              res.push_back(a - b);
            else if (op == '*')
              res.push_back(a * b);
          }
        }
      }
    }

    if (res.empty())
    {
      res.push_back(stoi(expression.substr(left, right + 1)));
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string expression = "2*3-4*5";
  vector<int> res = obj.diffWaysToCompute(expression);

  for (auto item : res)
    cout << item << " ";

  return 0;
}