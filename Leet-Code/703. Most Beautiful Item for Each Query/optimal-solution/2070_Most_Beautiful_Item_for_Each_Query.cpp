
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maximumBeauty(vector<vector<int>> &items, vector<int> &queries)
    {

        // Sort items by price (first element in each pair)
        sort(items.begin(), items.end());

        // Create a vector of pairs to store queries with their original indices
        vector<pair<int, int>> q;

        for (int i = 0; i < queries.size(); i++)
        {
            q.push_back({queries[i], i});
        }

        // Sort queries based on the query price
        sort(q.begin(), q.end());

        vector<int> res(queries.size(), 0); // Result vector initialized to 0
        int max_bea = 0;                    // Maximum beauty tracker
        int j = 0;                          // Pointer for items array

        for (int i = 0; i < q.size(); i++)
        {
            int query_price = q[i].first;
            int query_index = q[i].second;

            while (j < items.size() && items[j][0] <= query_price)
            {
                max_bea = max(max_bea, items[j][1]);
                j++;
            }

            res[query_index] = max_bea;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 2}, {3, 2}, {2, 4}, {5, 6}, {3, 5}};
    vector<int> q = {2, 4, 5, 5, 6, 6};

    vector<int> res = obj.maximumBeauty(arr, q);

    for (auto item : res)
        cout << item << " ";

    return 0;
}