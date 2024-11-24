#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        int n = arr.size();
        vector<int> prefixXorSum(n + 1, 0);
        prefixXorSum[0] = 0;

        vector<int> res;

        // calculate prefix xor of each item
        for (int i = 0; i < n; i++)
        {
            prefixXorSum[i + 1] = prefixXorSum[i] ^ arr[i];
        }

        for (auto item : queries)
        {
            int left = item[0], right = item[1] + 1;
            res.push_back(prefixXorSum[left] ^ prefixXorSum[right]);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 4, 8};
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 3}, {3, 3}};
    vector<int> res = obj.xorQueries(arr, queries);

    for (auto item : res)
    {
        cout << item << " ";
    }
    return 0;
}