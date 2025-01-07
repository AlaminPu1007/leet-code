#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string nearestPalindromic(string n)
  {
    int L = n.size();

    // take half of the string
    int i = L % 2 == 0 ? L / 2 - 1 : L / 2;
    long firstHalf = stol(n.substr(0, i + 1));

    vector<long> possibleResults;

    possibleResults.push_back(halfToPalindrome(firstHalf, L % 2 == 0));
    possibleResults.push_back(halfToPalindrome(firstHalf + 1, L % 2 == 0));
    possibleResults.push_back(halfToPalindrome(firstHalf - 1, L % 2 == 0));
    possibleResults.push_back((long)pow(10, L - 1) - 1);
    possibleResults.push_back((long)pow(10, L) + 1);

    long diff = LONG_MAX, res = 0, nl = stol(n);

    for (auto cand : possibleResults)
    {
      if (cand == nl)
        continue;
        
      if (abs(cand - nl) < diff)
      {
        diff = abs(cand - nl);
        res = cand;
      }
      else if (abs(cand - nl) == diff)
      {
        res = min(res, cand);
      }
    }

    return to_string(res);
  }

private:
  long halfToPalindrome(long left, bool even)
  {
    long res = left;

    // if n is odd length then we keep mid as it is.
    if (!even)
      left = left / 10;

    while (left > 0)
    {
      res = res * 10 + left % 10;
      left /= 10;
    }
    return res;
  }
};

int main(void)
{
  Solution obj;
  string str = "10000000000000000";
  cout << obj.nearestPalindromic(str) << endl;
  return 0;
}