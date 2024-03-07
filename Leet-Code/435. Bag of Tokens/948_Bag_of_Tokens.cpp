#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int bagOfTokensScore(vector<int> &tokens, int power)
  {
    int n = tokens.size();
    int l = 0, r = n - 1;

    int res = 0, score = 0;

    // sort the array of element to get tokens as a ascending order
    sort(tokens.begin(), tokens.end());
    while (l <= r)
    {
      if (power >= tokens[l])
      {
        power -= tokens[l++];

        score++;
        res = max(res, score);
      }
      else if (score > 0)
      {
        power += tokens[r--];
        score--;
      }
      else
        break;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {100, 200, 300, 400};
  int p = 200;

  cout << obj.bagOfTokensScore(arr, p) << endl;
  return 0;
}
