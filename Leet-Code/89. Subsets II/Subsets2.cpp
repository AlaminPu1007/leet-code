#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void findSubsets(int ind, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, int len)
    {
        ans.push_back(ds);

        for (int i = ind; i < len; i++)
        {
            if (i != ind && arr[i] == arr[i - 1])
                continue;
            cout << i << " ";
            ds.push_back(arr[i]);
            findSubsets(i + 1, arr, ds, ans, len);
            ds.pop_back();
        }
    };

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int len = nums.size();
        sort(nums.begin(), nums.end());
        // find Subsets
        findSubsets(0, nums, ds, ans, len);
        return ans;
    };
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 2, 4};
    vector<vector<int>> ans = obj.subsetsWithDup(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}