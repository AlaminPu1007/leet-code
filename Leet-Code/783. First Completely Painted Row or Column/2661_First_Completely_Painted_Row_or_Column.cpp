#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
    {
        // initialization
        int n = mat.size(), m = mat[0].size();
        unordered_map<int, pair<int, int>> Map;
        vector<int> rowCount(n, 0), colCount(m, 0);

        // stored each element matrix position into hash-map
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int value = mat[i][j];
                Map[value] = {i, j};
            }
        }

        // iterate over the array
        for (int i = 0; i < arr.size(); i++)
        {
            int num = arr[i];
            auto [row, col] = Map[num];

            rowCount[row]++;
            colCount[col]++;

            if (rowCount[row] == m || colCount[col] == n)
                return i;
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> grid = {{3, 2, 5}, {1, 4, 6}, {8, 7, 9}};
    vector<int> arr = {2, 8, 7, 4, 1, 3, 5, 6, 9};

    cout << obj.firstCompleteIndex(arr, grid) << endl;

    return 0;
}