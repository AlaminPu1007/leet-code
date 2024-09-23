#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> survivedRobotsHealths(vector<int> &positions, vector<int> &healths, string directions)
  {
    stack<int> st;
    map<int, int> Map;
    int n = positions.size();

    for (int i = 0; i < n; i++)
      Map[positions[i]] = i;

    for (auto item : Map)
    {
      int i = item.second;

      // if robot is moving in the right direction
      // there is no possibility for collision
      if (directions[i] == 'R')
      {
        st.push(i);
      }
      else
      {

        while (st.size() && healths[i] > 0 && directions[st.top()] == 'R')
        {
          // pop the top robot from the stack for collision check
          int idx = st.top();
          st.pop();

          // if current item is smaller than top of the stack item
          if (healths[i] > healths[idx])
          {
            healths[idx] = 0;
            healths[i] -= 1;
          }
          //
          else if (healths[i] < healths[idx])
          {
            healths[i] = 0;
            healths[idx] -= 1;

            // now put this into stack again cause previous it's removed
            st.push(idx);
          }
          // if both has the same value
          else
          {
            healths[idx] = 0;
            healths[i] = 0;
          }
        }

        // if health is present
        if (healths[i])
          st.push(i);
      }
    }

    vector<int> res;

    for (auto item : healths)
      if (item)
        res.push_back(item);

    return res;
  }
};

int main(void)
{
  Solution obj;
  // vector<int> positions = {3, 5, 2, 6}, healths = {10, 10, 15, 12};
  vector<int> positions = {3, 40}, healths = {49, 11};
  string directions = "LL";

  vector<int> ans = obj.survivedRobotsHealths(positions, healths, directions);

  for (auto item : ans)
    cout << item << " ";

  return 0;
}