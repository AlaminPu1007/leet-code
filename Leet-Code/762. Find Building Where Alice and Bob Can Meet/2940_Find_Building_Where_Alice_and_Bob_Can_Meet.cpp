#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, int> IPair;

public:
    vector<int> leftmostBuildingQueries(vector<int> &heights, vector<vector<int>> &queries)
    {
        int n = queries.size();
        vector<int> res(n, -1);

        priority_queue<IPair, vector<IPair>, greater<IPair>> pq;
        unordered_map<int, vector<IPair>> groups;

        int i = 0;

        for (int i = 0; i < n; ++i)
        {
            auto &q = queries[i];
            sort(q.begin(), q.end());

            int l = q[0], r = q[1];

            // without this we may missed some answers
            if (l == r || heights[r] > heights[l])
                res[i] = r;

            else
            {
                int h = max(heights[l], heights[r]);
                groups[r].emplace_back(h, i); // Store (required_height, query_index)
            }
        }

        for (int i = 0; i < heights.size(); i++)
        {
            // store all the group in heap for this index of `i`
            for (auto &[q_h, q_i] : groups[i])
                pq.push({q_h, q_i});

            while (pq.size() && heights[i] > pq.top().first)
            {
                int idx = pq.top().second;
                pq.pop();

                res[idx] = i;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {6, 4, 8, 5, 2, 7};
    vector<vector<int>> queries = {{0, 1}, {0, 3}, {2, 4}, {3, 4}, {2, 2}};

    vector<int> res = obj.leftmostBuildingQueries(arr, queries);

    for (auto item : res)
        cout << item << " ";

    return 0;
}