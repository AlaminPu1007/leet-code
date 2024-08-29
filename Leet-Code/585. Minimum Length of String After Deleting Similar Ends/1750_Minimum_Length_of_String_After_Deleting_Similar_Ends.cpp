#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minimumLength(string s)
  {
    int n = s.size();
    int left = 0, right = n - 1;

    while (left < right && s[left] == s[right])
    {
      char c = s[left];

      //  move the left pointer to next character
      // if it is same as it's next character
      while (left <= right && s[left] == c)
        left++;

      //  move the left pointer to previous character
      // if it is same as it's previous character
      while (left < right && s[right] == c)
        right--;
    }

    return right - left + 1;
  }
};

int main(void)
{
  Solution obj;
  string str = "aabccabba";
  cout << obj.minimumLength(str) << endl;
  return 0;
}