#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minKBitFlips(vector<int> &nums, int k)
  {
    int n = nums.size();
    // define a queue, to keep track last flip bit
    queue<int> q;
    int res = 0;

    for (int i = 0; i < n; i++)
    {

      // shrink invalid window
      while (q.size() && q.front() < (i - k) + 1)
        q.pop();

      // get the flip bit
      // if we flip a bit five time, ex: (0 + 5) % 2 = 1, here five is the queue size
      if ((nums[i] + q.size()) % 2 == 0)
      {
        // check invalid window
        if (i + k > n)
          return -1;

        // store the last flip bit into queue
        q.push(i);
        res++;
      }
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {0, 0, 0, 1, 0, 1, 1, 0};
  int k = 3;
  cout << obj.minKBitFlips(arr, k) << endl;
  return 0;
}