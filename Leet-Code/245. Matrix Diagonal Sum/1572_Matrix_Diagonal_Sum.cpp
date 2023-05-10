
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size(), m = mat[0].size();
        int res = 0, j = 0;

        for (int i = 0; i < n; i++)
        {

            res += mat[i][j++] + mat[i][--m];
        }

        if (n % 2 == 1)
            res -= mat[n / 2][n / 2];

        return res;
    }
};
