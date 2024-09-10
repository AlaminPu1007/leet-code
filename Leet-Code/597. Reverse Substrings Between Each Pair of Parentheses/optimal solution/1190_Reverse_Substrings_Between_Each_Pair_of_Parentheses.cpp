#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string reverseParentheses(string s)
  {
    stack<int> st;
    string res = "";

    int i = 0, n = s.size();

    // this will hold the open and close parenthesis index
    // ex: like an undirected edge
    unordered_map<int, int> pairs;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '(')
        st.push(i);

      else if (s[i] == ')')
      {
        int j = st.top();
        st.pop();

        // making an connection between them
        pairs[i] = j;
        pairs[j] = i;
      }
    }

    int direction = 1;

    while (i < n)
    {
      if (s[i] == '(' || s[i] == ')')
      {
        // update i with nearest parenthesis
        // it can be close or open
        i = pairs[i];

        // update the direction
        // direction can be right or backward
        direction = -direction;
      }

      else
        res += s[i];

      i += direction;
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