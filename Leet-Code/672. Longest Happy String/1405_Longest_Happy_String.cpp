#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string longestDiverseString(int a, int b, int c)
  {
    priority_queue<pair<int, char>> pq;

    // if a has frequency grater than 0
    if (a > 0)
      pq.push({a, 'a'});

    // if b has frequency grater than 0
    if (b > 0)
      pq.push({b, 'b'});

    // if c has frequency grater than 0
    if (c > 0)
      pq.push({c, 'c'});

    string res = "";

    while (pq.size())
    {
      int count = pq.top().first;
      char ch = pq.top().second;
      // removed item from heap.
      pq.pop();

      // if current character have already consecutive 2 character in results
      // then, need to put another new character
      if (res.length() > 1 && res[res.length() - 1] == ch && res[res.length() - 2] == ch)
      {
        if (pq.empty())
          break;

        int count2 = pq.top().first;
        char ch2 = pq.top().second;
        // removed item from heap.
        pq.pop();

        res += ch2;
        count2--;

        // insert into heap, if it's have enough frequency
        if (count2 > 0)
          pq.push({count2, ch2});
      }
      //
      else
      {
        res = res + ch;
        count--;
      }

      if (count > 0)
        pq.push({count, ch});
    }

    return res;
  }
};

int main(void)
{
  int a = 1, b = 1, c = 7;
  Solution obj;
  cout << obj.longestDiverseString(a, b, c) << endl;
  return 0;
}