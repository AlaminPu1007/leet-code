#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> IPAIR;
class Solution
{
public:
    vector<int> maxPoints(vector<vector<int>> &grid, vector<int> &queries)
    {
        int n = grid.size(), m = grid[0].size();
        vector<int> res(queries.size(), 0);
        vector<pair<int, int>> q;

        for (int i = 0; i < queries.size(); i++)
            q.push_back({queries[i], i});

        // now sort the q arrays to eliminate some repeated word
        sort(q.begin(), q.end());

        // initialzed a priority-queue
        priority_queue<IPAIR, vector<IPAIR>, greater<IPAIR>> pq; // {grid[0][0], r, c}
        pq.push({grid[0][0], {0, 0}});

        vector<vector<int>> visit(n, vector<int>(m, 0));
        visit[0][0] = 1;

        int count = 0;
        int del_row[] = {-1, 0, +1, 0}, del_col[] = {0, +1, 0, -1};

        // iterate over the queries
        for (int i = 0; i < q.size(); i++)
        {
            int limit = q[i].first;
            int index = q[i].second;

            while (pq.size() && pq.top().first < limit)
            {
                auto item = pq.top();
                pq.pop();

                int r = item.second.first, c = item.second.second;

                count++;

                // iterate over the neighbour nodes
                for (int i = 0; i < 4; i++)
                {
                    int new_row = del_row[i] + r;
                    int new_col = del_col[i] + c;

                    if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && !visit[new_row][new_col])
                    {
                        visit[new_row][new_col] = 1;
                        pq.push({grid[new_row][new_col], {new_row, new_col}});
                    }
                }
            }

            res[index] = count;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> grid = {{1, 2, 3}, {2, 5, 7}, {3, 5, 1}};
    vector<int> q = {5, 6, 2};
    vector<int> res = obj.maxPoints(grid, q);

    for (auto item : res)
        cout << item << " ";

    return 0;
}