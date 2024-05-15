#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string minWindow(string s, string t)
    {
        int n = s.length(), m = t.length();

        if (t == "")
            return "";

        int resLen[2], left = 0, res = INT_MAX;
        resLen[0] = -1, resLen[1] = -1;

        unordered_map<char, int> countT, window;

        // create a hash-map for t
        for (auto c : t)
            countT[c]++;

        int need = countT.size(), have = 0;

        for (int r = 0; r < n; r++)
        {
            char c = s[r];

            window[c]++;

            if (countT.find(c) != countT.end() && window[c] == countT[c])
            {
                have++;
            }

            while (have == need)
            {
                // update our result
                if ((r - left + 1) < res)
                {
                    res = (r - left + 1);
                    resLen[0] = r, resLen[1] = left;
                }

                // removed element from left in window
                window[s[left]]--;

                // also need to update have pointer
                if (countT.find(s[left]) != countT.end() && window[s[left]] < countT[s[left]])
                    have--;

                left++;
            }
        }

        return resLen[0] == -1 ? "" : s.substr(resLen[1], resLen[0] - resLen[1] + 1);
    }
};

int main(void)
{
    Solution obj;
    string s = "ADOBECODEBANC", t = "ABC";
    // string s = "abc", t = "b";
    cout << obj.minWindow(s, t) << endl;
    return 0;
}