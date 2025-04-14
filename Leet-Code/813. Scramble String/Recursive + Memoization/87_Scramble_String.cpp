/**
 * A recursive + memoization approach is taken to solved this proble.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isScramble(string s1, string s2)
    {
        unordered_map<string, bool> cache;
        return Solve(s1, s2, cache);
    }

private:
    bool Solve(string s1, string s2, unordered_map<string, bool> &cache)
    {
        // handle base case

        // if any of them have not similar length
        // there is no possibility a matching result
        if (s1.length() != s2.length())
            return false;

        // both string are equal, then return true
        if (s1.compare(s2) == 0)
            return true;

        string key = s1 + "_" + s2;

        // if we have already seen this result
        if (cache.count(key))
            return cache[key];

        bool res = false;
        int n = s1.size();

        // start loop from 1 to avoid empty string
        for (int i = 1; i < n; i++)
        {
            // try to swap both string after split

            /*
                Example : "great"  "eatgr"
                if swapped at i = 2
                we compare s1.substr(0, i) i.e "gr"  with s2.substr(n-i, i) i.e. "gr"
                && s1.substr(i, n-i) i.e "eat"  with s2.substr(0, n-i) i.e. "eat"
           */
            bool makeSwap = Solve(s1.substr(0, i), s2.substr(n - i, i), cache) && Solve(s1.substr(i, n - i), s2.substr(0, n - i), cache);

            if (makeSwap)
            {
                res = true;
                break;
            }

            // try to not swap both string after split

            /*
                Example : "great"  "great"
                if not swapped at i = 2
                we compare s1.substr(0, i) i.e "gr"  with s2.substr(0, i) i.e. "gr"
                && s1.substr(i, n-i) i.e "eat"  with s2.substr(i, n-i) i.e. "eat"
           */
            bool makeNotSwap = Solve(s1.substr(0, i), s2.substr(0, i), cache) && Solve(s1.substr(i, n - i), s2.substr(i, n - i), cache);

            if (makeNotSwap)
            {
                res = true;
                break;
            }
        }

        return cache[key] = res;
    }
};

int main(void)
{
    Solution obj;
    string s1 = "great", s2 = "rgeat";

    cout << obj.isScramble(s1, s2) << endl;

    return 0;
}