#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minMovesToSeat(vector<int> &seats, vector<int> &students)
  {
    int n = seats.size();
    int res = 0;

    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());

    for (int i = 0; i < n; i++)
      res += abs(seats[i] - students[i]);

    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> seats = {3, 1, 5}, students = {2, 7, 4};
  cout << obj.minMovesToSeat(seats, students) << endl;
  return 0;
}