#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds, int len)
    {
        // base case
        if (ind == len)
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }

        // Pick an element, until target is less than to ds-> array size
        if (arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            // called recursion
            findCombination(ind, target - arr[ind], arr, ans, ds, len);
            // remove last pushed element, to avoid the value, for making condition false
            ds.pop_back();
        }

        // pick the next-element
        findCombination(ind + 1, target, arr, ans, ds, len);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &arr, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int len = arr.size();
        findCombination(0, target, arr, ans, ds, len);
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans = obj.combinationSum(arr, target);
    cout << "get the answer" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";

        cout << endl;
    }
    return 0;
}