/*
    Time-complexity -> O(n + m)
    Space-complexity -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=m-1;
        while(i<n && j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else
                j--;
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
