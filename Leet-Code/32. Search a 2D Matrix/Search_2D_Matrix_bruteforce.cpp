/*
    Time-complexity -> O(n^2)
    Space-complexity -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row_len = matrix.size(), col_len = matrix[0].size();
        
        for(int i = 0; i < row_len; i++)
        {
            for(int j = 0; j < col_len; j++)
            {
                if(matrix[i][j] == target)
                return true;
            }
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>>matrix = 
    {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60},
    };
    obj.searchMatrix(matrix, 3);
    return 0;
}
