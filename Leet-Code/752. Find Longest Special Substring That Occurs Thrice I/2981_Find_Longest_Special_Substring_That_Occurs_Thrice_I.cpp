#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumLength(string s)
    {
        vector<vector<int>> topFreq(26, vector<int>(3, -1));
        int n = s.size();

        char lastSeenChar = '*';
        int windowLen = 0;

        for (int i = 0; i < n; i++)
        {
            int idx = s[i] - 'a';

            windowLen = s[i] == lastSeenChar ? windowLen + 1 : 1;

            // update the last seen character
            lastSeenChar = s[i];

            int &updateCurItem = updateMinLen(topFreq[idx][0], topFreq[idx][1], topFreq[idx][2]);

            updateCurItem = max(windowLen, updateCurItem);
        }

        int res = -1;

        for (int i = 0; i < 26; i++)
            res = max(res, min({topFreq[i][0], topFreq[i][1], topFreq[i][2]}));

        return res;
    }

private:
    int &updateMinLen(int &a, int &b, int &c)
    {
        if (a <= b && a <= c)
            return a;

        if (b <= a && b <= c)
            return b;

        return c;
    }
};

int main(void)
{
    Solution obj;
    string s = "aaabbaaaabbaaaa";

    cout << obj.maximumLength(s) << endl;
    return 0;
}