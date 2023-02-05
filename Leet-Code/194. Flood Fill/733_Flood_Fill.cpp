
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        vector<vector<int>> ans = image;
        int initialColor = image[sr][sc];
        Bfs_Method(image, ans, sr, sc, color, initialColor);

        return ans;
    }

private:
    void Bfs_Method(vector<vector<int>> &image, vector<vector<int>> &ans, int row, int col, int newColor, int initialColor)
    {
        int n = image.size();
        int m = image[0].size();

        queue<pair<int, int>> q;

        int del_row[] = {-1, 0, +1, 0};
        int del_col[] = {0, +1, 0, -1};

        q.push({row, col});
        ans[row][col] = newColor;

        while (!q.empty())
        {
            int row_value = q.front().first;
            int col_value = q.front().second;

            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int new_row = row_value + del_row[i];
                int new_col = col_value + del_col[i];

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && image[new_row][new_col] == initialColor && ans[new_row][new_col] != newColor)
                {
                    ans[new_row][new_col] = newColor;
                    q.push({new_row, new_col});
                }
            }
        }
    }
};

int main()
{
    vector<vector<int>> image{
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}};

    // sr = 1, sc = 1, newColor = 2
    Solution obj;
    vector<vector<int>> ans = obj.floodFill(image, 1, 1, 2);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
    return 0;
}