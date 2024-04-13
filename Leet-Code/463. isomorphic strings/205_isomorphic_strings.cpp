#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isIsomorphic(string s, string t)
  {
    // this map will hold for string s
    unordered_map<char, char> Map1;

    // this map will hold for string t
    unordered_map<char, char> Map2;

    // if the length of both strings are not equal
    if (s.length() != t.length())
      return false;

    for (int i = 0; i < s.length(); i++)
    {
      char s_ch = s[i];
      char t_ch = t[i];

      // check for invalid mapping
      if ((Map1.find(s_ch) != Map1.end() && Map1[s_ch] != t_ch) || (Map2.find(t_ch) != Map2.end() && Map2[t_ch] != s_ch))
        return false;

      // mapping the character
      Map1[s_ch] = t_ch;
      Map2[t_ch] = s_ch;
    }

    return true;
  }
};

int main(void)
{
  Solution obj;
  string s = "badc", t = "babc";
  cout << obj.isIsomorphic(s, t) << endl;
  return 0;
}