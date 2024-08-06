#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  double averageWaitingTime(vector<vector<int>> &customers)
  {
    double res = 0, n = customers.size();
    int curTime = 0;

    for (auto item : customers)
    {
      int arrivalTime = item[0];
      int cookingTime = item[1];

      if (curTime < arrivalTime)
      {
        curTime = arrivalTime;
      }

      int waitingTime = (curTime + cookingTime) - arrivalTime;

      res += waitingTime;

      curTime += cookingTime;
    }

    return (double)(res / n);
  }
};

int main(void)
{
  Solution obj;
  // each item -> // [arrivalTime, cookingTime]
  vector<vector<int>> customers = {{5, 2}, {5, 4}, {10, 3}, {20, 1}}; 
  cout << obj.averageWaitingTime(customers) << endl;
  return 0;
} 