#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {

        int len = trust.size();

        vector<int> trusting(n + 1, 0);
        vector<int> trusted(n + 1, 0);

        for (int i = 0; i < len; i++)
        {
            trusting[trust[i][0]]++;
            trusted[trust[i][1]]++;
        }

        int ans = -1;

        for (int i = 1; i <= n; i++)
        {
            cout << trusting[i] << " ";
            if (trusting[i] == 0 && trusted[i] == n - 1)
            {
                ans = i;
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> trust = {{1, 3}, {2, 3}};
    int res = obj.findJudge(3, trust);
    cout << res << endl;
    return 0;
}