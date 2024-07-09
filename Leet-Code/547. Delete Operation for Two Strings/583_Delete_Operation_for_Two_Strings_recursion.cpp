/*
  This is simple brute force approach using recursion.
  This solution give us memory "Memory Limit Exceeded".
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minDistance(string word1, string word2)
  {
    int n = word1.size(), m = word2.size();

    int lcs_length = DFS(n, word1, m, word2);

    // required no of deletion
    int noOfDeletion = (n - lcs_length);

    // required no of insertion
    int noOfInsertion = (m - lcs_length);

    return (noOfInsertion + noOfDeletion);
  }

private:
  int DFS(int n, string a, int m, string b)
  {
    // handle the base case
    if (n == 0 || m == 0)
      return 0;

    if (a[n - 1] == b[m - 1])
      return 1 + DFS(n - 1, a, m - 1, b);

    else
      return max(DFS(n - 1, a, m, b), DFS(n, a, m - 1, b));
  }
};

int main(void)
{
  Solution obj;
  string word1 = "dinitrophenylhydrazine", word2 = "benzalphenylhydrazone";
  cout << obj.minDistance(word1, word2) << endl;
  return 0;
}