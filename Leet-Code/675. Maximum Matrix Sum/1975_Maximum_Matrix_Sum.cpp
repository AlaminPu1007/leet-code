#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        long long sum = 0;
        int totalNegativeNum = 0;
        int minNegativeValue = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int curNum = matrix[i][j];

                sum += abs(curNum);

                // get total num of negative value
                if (curNum < 0)
                {
                    totalNegativeNum++;
                }
                // get the most minimum value for given matrix
                minNegativeValue = min(minNegativeValue, abs(curNum));
            }
        }

        return totalNegativeNum % 2 != 0 ? (sum - (2 * minNegativeValue)) : sum;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 2, 3}, {-1, -2, -3}, {1, 2, 3}};
    cout << obj.maxMatrixSum(arr) << endl;
    return 0;
}