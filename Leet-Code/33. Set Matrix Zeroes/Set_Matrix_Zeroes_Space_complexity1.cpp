/*
Time Complexity : O(M \times N)O(M×N)
Space Complexity : O(1)O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int row_len = matrix.size(), col_len = matrix[0].size();
        bool isCol = false;

        for (int i = 0; i < row_len; i++)
        {
            // Since first cell for both first row and first column is the same i.e. matrix[0][0]
            // We can use an additional variable for either the first row/column.
            // For this solution we are using an additional variable for the first column
            // and using matrix[0][0] for the first row.
            if (matrix[i][0] == 0)
            {
                isCol = true;
            }
            for (int j = 1; j < col_len; j++)
            {
                // If an element is zero, we set the first element of the corresponding row and column to
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // now make each row and col to 0
        for (int i = row_len - 1; i >= 0; i--)
        {
            for (int j = col_len - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            // if first ele of matrix is zero
            // then make all eles of first row as zero
            if (isCol)
                matrix[i][0] = 0;
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> matrix =
        {
            {0, 1, 2, 0},
            {3, 4, 5, 2},
            {1, 3, 1, 5},
        };
    obj.setZeroes(matrix);
    return 0;
}