#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int largestRectangleArea(vector<int> &heights)
  {
    int n = heights.size();
    stack<int> st;
    int leftBoundary[n], rightBoundary[n];
    int maxA = 0;

    // calculate the left boundary
    for (int i = 0; i < n; i++)
    {
      while (!st.empty() && heights[st.top()] >= heights[i])
        st.pop();

      if (st.empty())
        leftBoundary[i] = 0;

      else
        leftBoundary[i] = st.top() + 1;

      st.push(i);
    }

    // clear the stack to be re-used
    while (!st.empty())
      st.pop();

    // calculate the right boundary
    for (int i = n - 1; i >= 0; i--)
    {
      while (!st.empty() && heights[st.top()] >= heights[i])
        st.pop();

      if (st.empty())
        rightBoundary[i] = n - 1;

      else
        rightBoundary[i] = st.top() - 1;

      st.push(i);
    }

    for (int i = 0; i < n; i++)
    {
      maxA = max(maxA, heights[i] * (rightBoundary[i] - leftBoundary[i] + 1));
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