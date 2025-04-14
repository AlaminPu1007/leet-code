/**
 * A recursive approach is taken to solved this problem.
 * This solution will give us "Time Limit Exceeded".
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isScramble(string s1, string s2)
    {
        return Solve(s1, s2);
    }

private:
    bool Solve(string s1, string s2)
    {
        // handle base case

        // if any of them have not similar length
        // there is no possibility a matching result
        if (s1.length() != s2.length())
            return false;

        // both string are equal, then return true
        if (s1.compare(s2) == 0)
            return true;

        bool res = false;
        int n = s1.size();

        cout << s1 << " " << s2 << endl;

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
            bool makeSwap = Solve(s1.substr(0, i), s2.substr(n - i, i)) && Solve(s1.substr(i, n - i), s2.substr(0, n - i));

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
            bool makeNotSwap = Solve(s1.substr(0, i), s2.substr(0, i)) && Solve(s1.substr(i, n - i), s2.substr(i, n - i));

            if (makeNotSwap)
            {
                res = true;
                break;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s1 = "great", s2 = "egeat";

    cout << obj.isScramble(s1, s2) << endl;

    return 0;
}