#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> isArraySpecial(vector<int> &nums, vector<vector<int>> &queries)
    {
        vector<bool> res;

        int n = nums.size();
        vector<int> prefixSum(n, 1);

        for (int i = 1; i < n; i++)
        {
            if (nums[i] % 2 == nums[i - 1] % 2)
            {
                continue;
            }

            prefixSum[i] = prefixSum[i - 1] + 1;
        }

        for (auto item : queries)
        {
            int start = item[0];
            int end = item[1];

            int window = end - start + 1;

            if (prefixSum[end] < window)
                res.push_back(false);

            else
                res.push_back(true);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 3, 1, 6};
    vector<vector<int>> query = {{0, 2}, {2, 3}};

    vector<bool> res = obj.isArraySpecial(arr, query);

    for (auto item : res)
        cout << item << " ";

    return 0;
}