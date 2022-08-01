/*
    Time-complexity ->O(Log (n * m))
    Space-complexity -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_len = matrix.size(), col_len = matrix[0].size();
        
        int low = 0, high = (row_len * col_len) - 1;
        
        while(low <= high)
        {
            int mid = (high + low) / 2;
            int compare_value = matrix[mid / col_len][mid % col_len];
            
            if(compare_value == target)
            {
                return true;
            }
            else if(target > compare_value)
            {
                low = mid + 1;
            }
            else 
                high = mid - 1;
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
    obj.searchMatrix(matrix, 60);
    return 0;
}