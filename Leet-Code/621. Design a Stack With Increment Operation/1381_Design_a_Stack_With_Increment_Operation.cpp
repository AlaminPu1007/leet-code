#include <bits/stdc++.h>
using namespace std;

class CustomStack
{
  int count = -1;
  vector<int> st;

public:
  CustomStack(int maxSize)
  {
    st.resize(maxSize);
  }

  void push(int x)
  {
    if (count < (int)st.size() - 1)
    {
      st[++count] = x;
    }
  }

  int pop()
  {
    if (count >= 0)
    {
      return st[count--];
    }
    return -1;
  }

  void increment(int k, int val)
  {
    int len = min(k, count + 1);
    for (int i = 0; i < len; i++)
    {
      st[i] += val;
    }
  }
};
