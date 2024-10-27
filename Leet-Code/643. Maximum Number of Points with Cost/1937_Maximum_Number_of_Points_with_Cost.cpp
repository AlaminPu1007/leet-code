#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxPoints(vector<vector<int>> &points)
    {
        long long n = points.size(), m = points[0].size();

        vector<long long> cur_row(points[0].begin(), points[0].end());

        for (int i = 1; i < n; i++)
        {
            vector<long long> next_row(points[i].begin(), points[i].end());

            vector<long long> leftSum(m, 0), rightSum(m, 0);

            leftSum[0] = cur_row[0];

            // calculate the left-prefix Sum
            for (int j = 1; j < m; j++)
                leftSum[j] = max(cur_row[j], leftSum[j - 1] - 1);

            rightSum[m - 1] = cur_row[m - 1];

            // calculate the right-prefix Sum
            for (int j = m - 2; j >= 0; j--)
                rightSum[j] = max(cur_row[j], rightSum[j + 1] - 1);

            // calculate sum for next-row
            for (int j = 0; j < m; j++)
                next_row[j] += max(leftSum[j], rightSum[j]);

            // update cur_row by next_row
            cur_row = next_row;
        }

        return *max_element(cur_row.begin(), cur_row.end());
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 2, 3}, {1, 5, 1}, {3, 1, 1}};
    cout << obj.maxPoints(arr) << endl;
    return 0;
}