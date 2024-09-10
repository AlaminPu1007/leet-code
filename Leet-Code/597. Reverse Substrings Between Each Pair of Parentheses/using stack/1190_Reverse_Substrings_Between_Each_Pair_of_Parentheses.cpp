#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string reverseParentheses(string s)
  {
    stack<int> st;
    string res = "";

    for (auto ch : s)
    {
      if (ch == '(')
        st.push(res.size());

      else if (ch == ')')
      {
        int idx = st.top();
        st.pop();

        // reverse the current parenthesis string
        reverse(res.begin() + idx, res.end());
      }

      else
        res += ch;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string s = "(u(love)i)";
  cout << obj.reverseParentheses(s) << endl;
  return 0;
}