#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> res(m, vector<int>(n, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                res[j][i] = matrix[i][j];
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, res;
    res = obj.transpose(matrix);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}