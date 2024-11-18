/*
  This is iterative approach with some math tricks. (Wait.. this is a simple mathmatical approach, no worries).
  The idea is simple, from any index of 'rating` array, we will find the no of total small elements present before or left portion of the array.
  Then we will also find the larger element from the right side of the array. Then multiply them(cause we need subsequence).
  Note: This is more efficient result.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numTeams(vector<int> &rating)
  {
    int n = rating.size();
    int res = 0;

    // exclusive last and first element from the array
    for (int i = 1; i < n - 1; i++)
    {
      int left_small_item = 0, right_larger_item = 0;

      // calculate for left portion
      for (int left = 0; left < i; left++)
      {
        if (rating[left] < rating[i])
          left_small_item++;
      }

      // calculate for right portion
      for (int right = i + 1; right < n; right++)
      {
        if (rating[right] > rating[i])
          right_larger_item++;
      }

      // get the  increasing subsequence
      // we need subsequence, that the reason to multiply them
      res += (left_small_item * right_larger_item);

      // get the  decreasing subsequence
      int left_larger_item = (i - left_small_item);

      int right_total_element = (n - 1 - i);

      // now get the smallest element after subtract it from right portion
      int right_smaller_item = (right_total_element - right_larger_item);

      res += (left_larger_item * right_smaller_item);
    }
    return res;
  }
};

int main(void)
{
  Solution obj;
  vector<int> arr = {2, 5, 3, 4, 1};
  cout << obj.numTeams(arr) << endl;
  return 0;
}