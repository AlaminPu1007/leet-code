#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> ds;

        // print permutation
        Permutations(1, k, n, ds, ans);

        return ans;
    }

    void Permutations(int start, int k, int n, vector<int> &ds, vector<vector<int>> &ans)
    {
        if (k == 0)
        {
            ans.push_back(ds);
            return;
        }

        for (int i = start; i <= n; i++)
        {
            ds.push_back(i);

            Permutations(i + 1, k - 1, n, ds, ans);
            // after complete first recursion tree completely
            //  we need to pop last value
            ds.pop_back();
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> ans = obj.combine(3, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}