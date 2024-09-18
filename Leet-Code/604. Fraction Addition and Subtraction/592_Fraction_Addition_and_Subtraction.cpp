#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string fractionAddition(string expression)
  {
    int n = expression.size();
    int numerator = 0, denominator = 1, i = 0;

    while (i < n)
    {
      int curNumerator = 0, curDenominator = 0;

      bool isNegative = (expression[i] == '-');

      // skip current +, - sign
      if (expression[i] == '+' || expression[i] == '-')
        i++;

      // get current numerator
      while (i < n && isdigit(expression[i]))
      {
        int val = expression[i] - '0';
        curNumerator = (curNumerator * 10) + val;
        i++;
      }

      i++; // numerator / denominator //skip the division character '/'

      if (isNegative == true)
        curNumerator *= -1;

      // get current curDenominator
      while (i < n && isdigit(expression[i]))
      {
        int val = expression[i] - '0';
        curDenominator = (curDenominator * 10) + val;
        i++;
      }

      // updated root numerator, denominator by current one
      numerator = numerator * curDenominator + curNumerator * denominator;
      denominator = denominator * curDenominator;
    }

    // get common divisor or gcd
    int GCD = abs(__gcd(numerator, denominator));

    numerator /= GCD;
    denominator /= GCD;

    return to_string(numerator) + "/" + to_string(denominator);
  }
};

int main(void)
{
  Solution obj;
  string expression = "-1/2+1/2";
  cout << obj.fractionAddition(expression) << endl;
  return 0;
}