#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void findSubsets(int ind, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, int len)
    {
        if (ind == len)
        {
            ans.push_back(ds);
            return;
        }

        // pick an element
        ds.push_back(arr[ind]);
        findSubsets(ind + 1, arr, ds, ans, len);
        ds.pop_back();

        findSubsets(ind + 1, arr, ds, ans, len);
    };
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int len = nums.size();
        // find Subsets
        findSubsets(0, nums, ds, ans, len);
        return ans;
    };
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = obj.subsets(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}