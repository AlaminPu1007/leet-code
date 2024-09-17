#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestPalindrome(string s)
  {
    int res = 0;

    unordered_set<char> st;

    for (auto item : s)
    {
      if (st.count(item))
      {
        st.erase(item);
        res += 2;
      }
      else
        st.insert(item);
    }

    if (st.size())
      res++;

    return res;
  }
};

int main(void)
{
  Solution obj;
  string s = "abccccdd";
  cout << obj.longestPalindrome(s) << endl;
  return 0;
}