/*
  The appraoch behind of this soltuion is, we will treat any character as a middle, then we will count how many 'b' on it's left portion
  and how many are left 'a' on it right protion.
  Now optimize the approach, we will take a extra precount approach, that will tell us from current item (treat as a middle),
  how many character are left on it right and left side.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minimumDeletions(string s)
  {
    int n = s.size();
    int res = INT_MAX;

    vector<int> preCount(n, 0);

    int count = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      preCount[i] = count;
      if (s[i] == 'a')
        count++;
    }

    int b_count = 0;

    for (int i = 0; i < n; i++)
    {
      int left_count = 0, right_count = 0;

      // Calculate the minimum deletions needed
      res = min(res, b_count + preCount[i]);

      if (s[i] == 'b')
        b_count++;
    }

    return res == INT_MAX ? 0 : res;
  }
};

int main(void)
{
  Solution obj;
  cout << obj.minimumDeletions("abaabbbabb") << endl;
  return 0;
}