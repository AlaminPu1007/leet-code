/*
  Our input string always contains 'a' or 'b', so if we put all the a left side and all the b right side,
  then it will ensure us to no pairs contains that would be (i > j).
  We will get "Time Limit Exceeded" for this solution.
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

    for (int i = 0; i <= n; i++)
    {
      int left_count = 0, right_count = 0;

      // Count 'b's on the left of the position i
      for (int j = 0; j < i; j++)
        if (s[j] == 'b')
          left_count++;

      // Count 'a's on the right of the position i
      for (int j = i; j < n; j++)
        if (s[j] == 'a')
          right_count++;

      // Calculate the minimum deletions needed
      res = min(res, left_count + right_count);
    }

    return res == INT_MAX ? 0 : res;
  }
};

int main(void)
{
  Solution obj;
  cout << obj.minimumDeletions("bbbbaabaabbaaabbbbbbaabbabbbbbbaabbabbbbbbbbaabaabbbbaaabbbbbbbabbbbaabaaaaabbabaabbabbabbbbbbbabbbaaaaaaabababbbbabbabababaaaabbbaabbbbabaaaabababaaaabbabbbaaaaababaaabbbbbbbbbaaababbbabaabaabbaabbababaaabbbbbabbabbbabbaabaabbbababbbabaabbbabbbababbaaabbbaaabbabbabaabbbabbbbababbabaabaababaaabaabaababaabaabbbbbbaabbaabbaaaabababbbabbbabbabaaabbabbabbabbbabaabaabbabbbbbabbababaaabababbbaaabaabaaaaaaaababbbbbaabbbabaaabbaaaaaabaabababaabbaaaabaaabababbbbbbbaabbbbaabbbbababaababaabbbbababaaababbaabababbbababbbaaaabababbbaaaabbabaaabbaabbbaabbbabbabaaaabbaabaabaaaabbabbabaaabbabababbaabaabbbbbbbbabbbbbbbbbbabbaabaabaabaaaaabbaababababaaabaababbbaabbbabbbabbbabbabbbaababaabaabaaabababbbaaaabbbaabaa") << endl;
  return 0;
}