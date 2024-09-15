/**
 * This question is the same as minimum no of deletion to make stirng palindrome.
 * This solution will give us "Memory Limit Exceeded"
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minInsertions(string s)
  {
    int n = s.size();
    string temp = s;
    reverse(temp.begin(), temp.end());
    int lcs = DFS(s, n, temp, n);

    return (n - lcs);
  }

private:
  int DFS(string str1, int i, string str2, int j)
  {
    // handle the base case
    if (i <= 0 || j <= 0)
      return 0;

    if (str1[i - 1] == str2[j - 1])
      return 1 + DFS(str1, i - 1, str2, j - 1);

    else
      return max(DFS(str1, i - 1, str2, j), DFS(str1, i, str2, j - 1));
  }
};

int main(void)
{
  Solution obj;
  string s = "mbadm";
  cout << obj.minInsertions(s) << endl;
  return 0;
}