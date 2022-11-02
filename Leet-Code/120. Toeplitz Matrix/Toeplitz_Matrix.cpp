
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row_len = matrix.size(), col_len = matrix[0].size();
        
        for(int row = 0; row < row_len; row++)
            for(int col = 0; col < col_len; col++)
                 if(row > 0 && col > 0 && matrix[row-1][col-1] != matrix[row][col])
                   return false;
            
        
        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,1,2,3},
        {9,5,1,2}
    };
    bool res = obj.isToeplitzMatrix(arr);
    cout<<res<<endl;

    return 0;
}