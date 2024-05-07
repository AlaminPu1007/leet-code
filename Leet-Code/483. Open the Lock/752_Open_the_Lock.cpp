#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int openLock(vector<string> &deadends, string target)
  {
    unordered_set<string> deadEndsList(deadends.begin(), deadends.end());

    if (deadEndsList.find("0000") != deadEndsList.end())
      return -1;

    queue<string> q;

    q.push("0000");
    // mark as visited
    deadEndsList.insert("0000");

    int count = 0;

    while (q.size())
    {
      int n = q.size();

      for (int i = 0; i < n; i++)
      {
        string currentLock = q.front();
        q.pop();

        if (currentLock == target)
          return count;

        // traverse for 4 digit lock
        for (int digitIndex = 0; digitIndex < 4; digitIndex++)
        {
          string up = currentLock;
          string down = currentLock;

          // convert current-digit into integer
          // avoiding overflow mod by 10
          int upDigit = (up[digitIndex] - '0' + 1) % 10;

          // ex: down[digitIndex] = 0, then decrement it by 1 can cause -1, for this scenario we add 9 by it them mod by 10
          int downDigit = (down[digitIndex] - '0' + 9) % 10;

          up[digitIndex] = upDigit + '0';
          down[digitIndex] = downDigit + '0';

          if (deadEndsList.find(up) == deadEndsList.end())
          {
            q.push(up);
            deadEndsList.insert(up);
          }

          if (deadEndsList.find(down) == deadEndsList.end())
          {
            q.push(down);
            deadEndsList.insert(down);
          }
        }
      }
      count++;
    }

    return -1;
  }
};

int main(void)
{
  Solution obj;
  vector<string> deadends = {"0201", "0101", "0102", "1212", "2002"};
  string t = "0202";
  cout << obj.openLock(deadends, t) << endl;
  return 0;
}