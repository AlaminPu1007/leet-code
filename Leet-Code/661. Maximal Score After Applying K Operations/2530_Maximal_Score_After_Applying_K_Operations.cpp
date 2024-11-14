#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long maxKelements(vector<int> &nums, int k)
  {
    long long res = 0;
    priority_queue<int> pq;

    for (auto item : nums)
      pq.push(item);

    while (pq.size() && k--)
    {
      int value = pq.top();
      res += value;
      pq.pop();

      pq.push(ceil(value / 3.0));
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {1, 10, 3, 3, 3};
  int k = 3;
  cout << obj.maxKelements(arr, k) << endl;
  return 0;
}