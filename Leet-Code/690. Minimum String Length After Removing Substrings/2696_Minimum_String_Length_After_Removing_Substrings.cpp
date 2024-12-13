#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minLength(string s)
  {
    stack<char> st;

    for (auto c : s)
    {
      if (st.empty())
      {
        st.push(c);
        continue;
      }

      if (c == 'B' && st.top() == 'A')
        st.pop();

      else if (c == 'D' && st.top() == 'C')
        st.pop();

      else
        st.push(c);
    }
    return st.size();
  }
};

int main(void)
{
  Solution obj;
  string str = "ABFCACDB";
  cout << obj.minLength(str) << endl;
  return 0;
}