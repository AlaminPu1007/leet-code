#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string s)
    {
        int len = s.size(), j = 0;
        vector<vector<int>> res;

        for (int i = 0; i < len; i++)
        {
            if (s[i] != s[i + 1] || i == (len - 1))
            {
                // subtract from start index
                if (i - j + 1 >= 3)
                {
                    res.push_back({j, i});
                }
                // update j = i + 1, the start of the next group
                j = i + 1;
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> ans = obj.largeGroupPositions("abcdddeeeeaabbbcd");

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";

        cout << endl;
    }

    return 0;
}