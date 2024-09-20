#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> restoreMatrix(vector<int> &rowSum, vector<int> &colSum)
    {
        int n = rowSum.size(), m = colSum.size();
        vector<vector<int>> res(n, vector<int>(m, 0));

        // fill, first column and each row with rowSum
        // cause it's will not violent the rowSum , then we will do stuff for column sum
        for (int i = 0; i < n; i++)
            res[i][0] = rowSum[i];

        // after satisfied each row sum, then we will try to also validate columnSum
        // that already are violet
        for (int col = 0; col < m; col++)
        {
            // this portion will calculate the current col sum
            long long col_sum = 0;

            for (int i = 0; i < n; i++)
                col_sum += res[i][col];

            int row = 0;

            while (col_sum > colSum[col] && col < m - 1)
            {
                // convert into long to avoid sign integer overflow
                long long diff = col_sum - colSum[col];
                long long maxShift = min((long long)res[row][col], diff);

                res[row][col] -= maxShift; // ex: if res[i][col] = 5, and maxShift = 5, then it will become to 0

                // shift it to the right column
                res[row][col + 1] += maxShift; // then the it will get the shifted value

                // now removed this much cost from col_sum also
                col_sum -= maxShift;
                row++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> rowSum = {5, 7, 10}, colSum = {8, 6, 8};
    vector<vector<int>> res = obj.restoreMatrix(rowSum, colSum);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}