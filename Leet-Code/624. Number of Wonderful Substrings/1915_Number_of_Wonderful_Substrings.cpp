#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution
{
public:
  long long wonderfulSubstrings(string word)
  {
    unordered_map<ll, ll> freqCount;

    freqCount[0] = 1;

    int count_xor = 0;
    ll res = 0;

    for (auto ch : word)
    {
      // get character to integer within 0 base indexing
      // ex: a -> 0, b -> 1, ... j -> 10
      int no_of_shift = (ch - 'a');

      // we we shift left bit by no_of_shift, we get
      // ex: a -> 0 -> "1 << 0  == 0 0 0 1"
      // ex: b -> 1 -> "1 << 1  == 0 0 1 0"
      // ex: c -> 2 -> "1 << 2  == 0 1 0 0"

      int shift = (1 << no_of_shift);

      // to get the total no of xor after xor element from word
      /*
        count_xor = count_xor ^ a = 0000 ^ 0001 = 0001
        count_xor = count_xor ^ a = 0001 ^ 0001 = 0000
        count_xor = count_xor ^ b = 0000 ^ 0010 = 0010
        count_xor = count_xor ^ b = 0010 ^ 0010 = 0000
      */
      count_xor ^= shift;

      // if we had already seen them, that's means a valid result is present
      // all character are event in count
      res += freqCount[count_xor];

      for (int i = 0; i < 10; i++)
      {

        int shift = (1 << i);
        ll check_xor = count_xor ^ shift;

        res += freqCount[check_xor];
      }

      // store cur_xor into map
      freqCount[count_xor]++;
    }

    return res;
  }
};

int main(void)
{
  Solution obj;
  string s = "aabb";
  cout << obj.wonderfulSubstrings(s) << endl;
  return 0;
}