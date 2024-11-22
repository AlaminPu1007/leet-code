#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minOperations(vector<string> &logs)
  {
    stack<string> st;

    for (auto item : logs)
    {

      if (!st.empty() && item == "../")
        st.pop();

      else if (item != "./" && item != "../")
        st.push(item);
    }

    return st.size();
  }
};

int main(void)
{
  Solution obj;
  // vector<string> arr = {"d1/", "d2/", "../", "d21/", "./"};
  vector<string> arr = {"./", "../", "./"};

  cout << obj.minOperations(arr) << endl;
  return 0;
}