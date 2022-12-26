#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDeletions(string s)
    {

        int len = s.size(), count = 0;
        int frq[26] = {0};

        unordered_set<int> Map;

        for (int i = 0; i < len; i++)
        {
            frq[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (frq[i])
            {
                // insert function has the second value to show whether the value x is inserted or not.
                while (frq[i] > 0 && !Map.insert(frq[i]).second)
                {
                    count++;
                    frq[i]--;
                }
            }
        }

        for (auto item = Map.begin(); item != Map.end(); item++)
            cout << *item << " ";

        return count;
    }
};

int main(void)
{
    Solution obj;
    string s = "aaabbbcc";

    int res = obj.minDeletions(s);
    // cout << res << endl;
    return 0;
}