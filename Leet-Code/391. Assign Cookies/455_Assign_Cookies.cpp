
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        // sort the array
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int n = g.size(), m = s.size();
        int i = 0, j = 0;

        while (i < n && j < m)
        {
            if (s[j] >= g[i])
                i++;

            j++;
        }
        return i;
    }
};

int main(void)
{
    Solution obj;
    vector<int> g = {1, 2}, s = {0, 0, 1, 2, 3};
    cout << obj.findContentChildren(g, s) << endl;
    return 0;
}