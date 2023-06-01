#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold)
    {
        // marking an copy to root array with infinity-value(int_max)
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));

        // fill dist array
        for (auto item : edges)
        {
            dist[item[0]][item[1]] = item[2];
            dist[item[1]][item[0]] = item[2];
        }

        // mark self node as a 0
        for (int i = 0; i < n; i++)
            dist[i][i] = 0;

        // traverse matrix with via(apply floyd warshall algo)
        for (int k = 0; k < n; k++)
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                {
                    if (dist[i][k] == INT_MAX || dist[k][j] == INT_MAX)
                        continue;
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }

        int countThreshold = n, city = -1;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (dist[i][j] <= distanceThreshold)
                    count++;
            }
            if (count <= countThreshold)
            {
                countThreshold = count;
                city = i;
            }
        }

        return city;
    }
};

int main(void)
{
    Solution obj;
    int n = 4, thresholds = 4;
    vector<vector<int>> edges = {{0, 1, 3}, {1, 2, 1}, {1, 3, 4}, {2, 3, 1}};
    cout << obj.findTheCity(n, edges, thresholds) << endl;
    return 0;
}