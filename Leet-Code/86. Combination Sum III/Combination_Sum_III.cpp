#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void findCombination(int i, vector<int> &arr, int len, int target, vector<int> &ds, vector<vector<int>> &ans)
    {

        if (target == 0)
        {
            if (len == ds.size())
                ans.push_back(ds);

            return;
        }

        for (int j = i; j < arr.size(); j++)
        {
            if (j > i && arr[j] == arr[j - 1])
                continue;
            if (arr[j] > target)
                break;

            ds.push_back(arr[j]);
            // move for next element by (i+1)
            findCombination(j + 1, arr, len, target - arr[j], ds, ans);
            // for each back-track remove last pushed element
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;

        vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        findCombination(0, arr, k, target, ds, ans);

        return ans;
    }
};

int main(void)
{
    Solution obj;

    int k = 3, n = 9;

    vector<vector<int>> ans = obj.combinationSum3(k, n);

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