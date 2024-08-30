#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int nthUglyNumber(int n)
  {
    unordered_set<long long> st;
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    pq.push(1);
    st.insert(1);

    vector<int> factors = {2, 3, 5};

    for (int i = 1; i <= n; i++)
    {
      long long value = pq.top();
      pq.pop();

      if (i == n)
        return value;

      for (auto item : factors)
      {
        long long cur_item = (long long)(item * value);

        if (st.find(cur_item) == st.end())
        {
          st.insert(cur_item);
          pq.push(cur_item);
        }
      }
    }

    return -1;
  }
};

int main(void)
{
  Solution obj;
  cout << obj.nthUglyNumber(10) << endl;
  return 0;
}