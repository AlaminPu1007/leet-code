#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void findCombination(int i, vector<int> &arr, int target, vector<int> &ds, vector<vector<int>> &ans)
    {

        if (target == 0)
        {
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
            findCombination(j + 1, arr, target - arr[j], ds, ans);
            // for each back-track remove last pushed elementSS
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;

        // sort array for an Lexicography order( 1, 2, 3, not -> 1, 3, 2)
        sort(candidates.begin(), candidates.end());

        findCombination(0, candidates, target, ds, ans);

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> ans = obj.combinationSum2(arr, target);

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