#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSideLength(vector<vector<int>> &mat, int threshold)
    {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> prefixSum(n, vector<int>(m, 0));
        int res = 0;

        // build prefix sum
        constructPrefixSum(mat, prefixSum);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // offset to find bottom right cell
                for (int k = res; k < min(n - i, m - j); k++)
                {
                    // get bottom right cell
                    int r2 = i + k;
                    int c2 = j + k;

                    int sum = getSubGridSum(i, j, r2, c2, prefixSum);

                    if (sum <= threshold)
                    {
                        res = k + 1;
                    }
                    // stop to execute loop for further
                    else
                        break;
                }
            }
        }

        return res;
    }

private:
    int getSubGridSum(int i, int j, int r2, int c2, vector<vector<int>> &prefixSum)
    {
        int sum = prefixSum[r2][c2];

        if (i > 0)
        {
            sum -= prefixSum[i - 1][c2];
        }

        if (j > 0)
        {
            sum -= prefixSum[r2][j - 1];
        }

        if (i > 0 && j > 0)
        {
            sum += prefixSum[i - 1][j - 1];
        }

        return sum;
    }

private:
    void constructPrefixSum(vector<vector<int>> &mat, vector<vector<int>> &prefixSum)
    {
        int n = mat.size(), m = mat[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                prefixSum[i][j] = (mat[i][j] + (i > 0 ? prefixSum[i - 1][j] : 0) + (j > 0 ? prefixSum[i][j - 1] : 0) - (i > 0 && j > 0 ? prefixSum[i - 1][j - 1] : 0));
            }
        }
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> grid =
        {
            {1, 1, 3, 2, 4, 3, 2},
            {1, 1, 3, 2, 4, 3, 2},
            {1, 1, 3, 2, 4, 3, 2}
            // END
        };

    cout << obj.maxSideLength(grid, 4) << endl;

    return 0;
}