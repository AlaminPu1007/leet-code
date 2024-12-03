#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findTheLongestSubstring(string s)
  {
    string vowels = "aeiou";
    int res = 0;
    int mask = 0;
    unordered_map<int, int> mask_to_idx;
    mask_to_idx[0] = -1;

    for (int i = 0; i < s.length(); i++)
    {
      char c = s[i];

      if (vowels.find(c) != string::npos)
      {
        mask ^= (1 + (c - 'a'));
      }

      if (mask_to_idx.find(mask) != mask_to_idx.end())
        res = max(res, i - mask_to_idx[mask]);

      else
        mask_to_idx[mask] = i;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  cout << obj.findTheLongestSubstring("eleetminicoworoep") << endl;
  return 0;
}