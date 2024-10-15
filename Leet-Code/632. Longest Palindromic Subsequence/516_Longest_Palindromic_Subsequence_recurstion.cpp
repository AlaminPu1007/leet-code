
/*
  This problem give us "Time Limit Exceeded"
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int longestPalindromeSubseq(string s)
  {
    int n = s.size();

    string newStr = s;
    reverse(newStr.begin(), newStr.end());

    return DFS(n, s, n, newStr);
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
  cout << obj.longestPalindromeSubseq("euazbipzncptldueeuechubrcourfpftcebikrxhybkymimgvldiwqvkszfycvqyvtiwfckexmowcxztkfyzqovbtmzpxojfofbvwnncajvrvdbvjhcrameamcfmcoxryjukhpljwszknhiypvyskmsujkuggpztltpgoczafmfelahqwjbhxtjmebnymdyxoeodqmvkxittxjnlltmoobsgzdfhismogqfpfhvqnxeuosjqqalvwhsidgiavcatjjgeztrjuoixxxoznklcxolgpuktirmduxdywwlbikaqkqajzbsjvdgjcnbtfksqhquiwnwflkldgdrqrnwmshdpykicozfowmumzeuznolmgjlltypyufpzjpuvucmesnnrwppheizkapovoloneaxpfinaontwtdqsdvzmqlgkdxlbeguackbdkftzbnynmcejtwudocemcfnuzbttcoew") << endl;
  return 0;
}