#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int n = img.size(), m = img[0].size();

        vector<vector<int>> res(n, vector<int>(m, 0));

        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                int sum = 0, count = 0;

                // iterate over the 9 grid, that have constant amount of spaces
                for (int i = row - 1; i <= row + 1; i++)
                {
                    for (int j = col - 1; j <= col + 1; j++)
                    {
                        if (i >= 0 && i < n && j >= 0 && j < m)
                        {
                            sum += img[i][j];
                            count++;
                        }
                    }
                }

                // update with new result
                res[row][col] = sum / count;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> img = {{100, 200, 100}, {200, 50, 200}, {100, 200, 100}};

    vector<vector<int>> res = obj.imageSmoother(img);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}