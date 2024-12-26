/*
    This solution will give us "Time Limit Exceeded".
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maximumBeauty(vector<vector<int>> &items, vector<int> &queries)
    {
        vector<int> res;
        int q_len = queries.size();

        for (int i = 0; i < q_len; i++)
        {
            int cur_price = queries[i];

            int maxItem = 0;

            for (auto item : items)
            {
                int p = item[0];
                int beauty = item[1];

                if (p <= cur_price)
                {
                    maxItem = max(maxItem, beauty);
                }
            }
            res.push_back(maxItem);
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