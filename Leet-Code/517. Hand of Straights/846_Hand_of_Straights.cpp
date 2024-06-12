#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isNStraightHand(vector<int> &hand, int groupSize)
  {
    int n = hand.size();

    if (n % groupSize)
      return false;

    unordered_map<int, int> frq;

    // Creates a min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto item : hand)
      frq[item]++;

    for (auto item : frq)
      pq.push(item.first);

    while (!pq.empty())
    {
      int value = pq.top();

      for (int i = 0; i < groupSize; i++)
      {
        int item = value + i;

        if (frq.find(item) == frq.end())
          return false;

        // decrement the freq of num
        frq[item] -= 1;

        if (frq[item] == 0)
        {
          if (pq.top() != item)
            return false;

          // removed item from pq
          pq.pop();
        }
      }
    }

    return true;
  }
};

int main(void)
{
  Solution obj;
  vector<int> hand = {1, 2, 3, 6, 2, 3, 4, 7, 8};
  int groupSize = 3;
  cout << obj.isNStraightHand(hand, groupSize) << endl;
  return 0;
}