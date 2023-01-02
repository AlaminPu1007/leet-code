#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDeletions(string s)
    {
        int len = s.size(), count = 0;
        vector<int> frq(26, 0);

        for (int i = 0; i < len; i++)
        {
            frq[s[i] - 'a']++;
        }

        // sort array
        sort(frq.begin(), frq.end());

        for (int i = 0; i < 25; i++)
        {
            if (frq[i] == frq[i + 1] && frq[i])
            {
                count++;
                // decrement frq[i] by 1
                frq[i]--;
                // i need to start again from 0
                i = 0;
            }
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    string s = "aaabbbcc";

    int res = obj.minDeletions(s);
    cout << res << endl;
    return 0;
}