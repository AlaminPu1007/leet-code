#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        for (auto row : grid)
            for (auto col : row)
                if (col < 0)
                    count++;
        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << obj.countNegatives(arr) << endl;
    return 0;
}