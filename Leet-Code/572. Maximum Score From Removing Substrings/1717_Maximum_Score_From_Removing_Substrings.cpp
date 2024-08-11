#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maximumGain(string s, int x, int y)
  {
    int n = s.size();
    int res = 0;

    string pair = x > y ? "ab" : "ba";

    // get first maximum score as much as possible
    res += removed_pairs(s, max(x, y), pair);

    string rev_pair = pair;
    reverse(rev_pair.begin(), rev_pair.end());

    // get the remaining paris sum
    res += removed_pairs(s, min(x, y), rev_pair);

    return res;
  }

private:
  int removed_pairs(string &s, int cost, string pair)
  {
    int ans = 0, i = 0;
    stack<char> st;

    for (auto ch : s)
    {
      if (st.size() && ch == pair[1] && st.top() == pair[0])
      {
        st.pop();
        ans += cost;
      }

      else
        st.push(ch);
    }

    // update root string
    string copyStr = "";

    while (st.size())
    {
      copyStr += st.top();
      st.pop();
    }

    // need to reverse cause we get it from stack
    reverse(copyStr.begin(), copyStr.end());

    s = copyStr;

    cout << s << endl;

    return ans;
  }
};

int main(void)
{
  Solution obj;
  string s = "cdbcbbaaabab";
  int x = 4, y = 5;

  cout << obj.maximumGain(s, x, y) << endl;
  return 0;
}