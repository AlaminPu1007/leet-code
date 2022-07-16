#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int len = matrix.size();

        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < len; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    obj.rotate(matrix);
    return 0;
}