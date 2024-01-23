#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        int res = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int mid = INT_MAX, left = INT_MAX, right = INT_MAX;

                mid = matrix[i - 1][j];
                if (j > 0)
                    left = matrix[i - 1][j - 1];

                if (j < (n - 1))
                    right = matrix[i - 1][j + 1];

                matrix[i][j] = (matrix[i][j] + min(mid, min(left, right)));
            }
        }

        for (int i = 0; i < n; i++)
            res = min(res, matrix[n - 1][i]);

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