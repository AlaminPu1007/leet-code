/*
Time Complexity: O(M \times N)O(M×N) where M and N are the number of rows and columns respectively.
Space Complexity: O(M + N)O(M+N).
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int>point_row, point_col;
        
        int row_len = matrix.size() ,col_len = matrix[0].size();
 
        for(int i = 0; i < row_len; i++)
        {
            for(int j = 0; j < col_len; j++)
            {
                if(matrix[i][j] == 0)
                {
                    point_row.push_back(i);
                    point_col.push_back(j);
                }
            }
        }
        
        
        for(int i = 0; i < row_len; i++)
        {
            for(int j = 0; j < col_len; j++)
            {
                if(count(point_row.begin(), point_row.end(), i) || count(point_col.begin(), point_col.end(), j))
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> matrix = 
    {
       {0,1,2,0},
       {3,4,5,2},
       {1,3,1,5},
    };
     obj.setZeroes(matrix);
    return 0;
}