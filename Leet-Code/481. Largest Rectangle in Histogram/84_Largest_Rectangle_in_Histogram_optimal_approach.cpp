#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int largestRectangleArea(vector<int> &heights)
  {
    int n = heights.size();
    stack<int> st;
    int maxA = 0;

    for (int i = 0; i <= n; i++)
    {
      while (!st.empty() && (i == n || heights[i] <= heights[st.top()]))
      {
        int h = st.top();
        st.pop();

        int width;

        if (st.empty())
        {
          width = i;
        }
        else
        {
          width = i - st.top() - 1;
        }
        maxA = max(maxA, heights[h] * width);
      }
      st.push(i);
    }

    return maxA;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {2, 1, 5, 6, 2, 3};
  cout << obj.largestRectangleArea(arr) << endl;
  return 0;
}