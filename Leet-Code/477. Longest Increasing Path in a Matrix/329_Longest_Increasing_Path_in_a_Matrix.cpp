#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int ans = 1;

public:
    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();

        unordered_map<string, int> cache;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                DFS(i, j, -1, cache, n, m, matrix);
            }
        }

        return ans;
    }

private:
    int DFS(int row, int col, int prvItem, unordered_map<string, int> &cache, int n, int m, vector<vector<int>> &matrix)
    {
        int del_row[4] = {-1, 0, 1, 0};
        int del_col[4] = {0, 1, 0, -1};

        string key = to_string(row) + ',' + to_string(col);

        // serve from the cache if value is already calculate
        if (cache.find(key) != cache.end())
            return cache[key];

        int res = 1;

        // visit matrix with 4 direction
        for (int i = 0; i < 4; i++)
        {
            int new_row = del_row[i] + row;
            int new_col = del_col[i] + col;

            if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && matrix[row][col] < matrix[new_row][new_col])
            {
                res = max(res, 1 + DFS(new_row, new_col, matrix[new_row][new_col], cache, n, m, matrix));
                ans = max(ans, res);
            }
        }

        cache[key] = res;
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> matrix = {{9, 9, 4}, {6, 6, 8}, {2, 1, 1}};
    cout << obj.longestIncreasingPath(matrix) << endl;
    return 0;
}