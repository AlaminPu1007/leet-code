#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> restoreMatrix(vector<int> &rowSum, vector<int> &colSum)
    {
        int n = rowSum.size(), m = colSum.size();
        vector<vector<int>> res(n, vector<int>(m, 0));

        int i = 0, j = 0;

        while (i < n && j < m)
        {
            // always put as well as minimum value at res[i][j] index
            res[i][j] = min(rowSum[i], colSum[j]);

            // now removed this much of cost from as sum
            rowSum[i] -= res[i][j];
            colSum[j] -= res[i][j];

            // if any of the row or column satisfied the total sum then do stuff for other row, col
            if (rowSum[i] == 0)
                i++;

            if (colSum[j] == 0)
                j++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> rowSum = {3, 8}, colSum = {4, 7};
    vector<vector<int>> res = obj.restoreMatrix(rowSum, colSum);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}