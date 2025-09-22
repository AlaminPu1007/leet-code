#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, int> IPair;
    typedef pair<int, IPair> PQPair;

public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        int n = points.size();
        priority_queue<PQPair> pq;
        vector<vector<int>> res;

        for (int i = 0; i < n; i++)
        {
            int x = points[i][0], y = points[i][1];
            int key = (x * x) + (y * y);

            pq.push({key, {x, y}});

            if (pq.size() > k)
                pq.pop();
        }

        while (pq.size())
        {
            auto item = pq.top();

            // removed item from queue
            pq.pop();

            res.push_back({item.second.first, item.second.second});
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{3, 3}, {5, -1}, {-2, 4}};

    vector<vector<int>> res = obj.kClosest(arr, 2);

    for (auto item : res)
    {
        cout << item[0] << " " << item[1] << endl;
    }

    return 0;
}