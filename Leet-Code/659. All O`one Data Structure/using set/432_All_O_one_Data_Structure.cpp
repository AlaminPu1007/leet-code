/*
 Accepted solution but, the dec, int method could have O(log(n)) time complexity,
 which may violence the given requirement.
*/

#include <bits/stdc++.h>
using namespace std;

class AllOne
{
  unordered_map<string, int> count;
  set<pair<int, string>> st;

public:
  AllOne()
  {
    count.clear();
  }

  void inc(string key)
  {
    int c = count[key];
    count[key]++;

    st.erase({c, key});
    st.insert({c + 1, key});
  }

  void dec(string key)
  {
    int c = count[key];
    count[key]--;
    st.erase({c, key});

    if (count[key] > 0)
    {
      st.insert({c - 1, key});
    }
    else
      st.erase({c, key});
  }

  string getMaxKey()
  {
    if (!st.empty())
      return st.rbegin()->second;
    return "";
  }

  string getMinKey()
  {
    if (!st.empty())
      return st.begin()->second;
    return "";
  }
};