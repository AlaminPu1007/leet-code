#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<string, int> cache;
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        int res = INT_MAX;

        // traverse through all column of the given matrix
        for (int i = 0; i < n; i++)
            res = min(res, DFS(0, i, n, matrix));

        return res;
    }

private:
    int DFS(int row, int col, int n, vector<vector<int>> &matrix)
    {
        if (row > n || row == n)
            return 0;

        if (col == n || col > n || col < 0)
            return INT_MAX;

        string key = to_string(row) + ", " + to_string(col);
        if (cache.find(key) != cache.end())
            return cache[key];

        int res = 0;
        res = matrix[row][col] + min(DFS(row + 1, col - 1, n, matrix), min(DFS(row + 1, col, n, matrix), DFS(row + 1, col + 1, n, matrix)));

        cache[key] = res;

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> mat = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
    cout << obj.minFallingPathSum(mat) << endl;

    return 0;
}