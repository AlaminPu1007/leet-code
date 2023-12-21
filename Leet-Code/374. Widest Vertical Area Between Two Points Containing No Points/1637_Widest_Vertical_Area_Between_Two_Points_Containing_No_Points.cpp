#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        int n = points.size();
        int res = 0;

        sort(points.begin(), points.end());

        for (int i = 1; i < n; i++)
            res = max(res, (points[i][0] - points[i - 1][0]));

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{8, 7}, {9, 9}, {7, 4}, {9, 7}};
    cout << obj.maxWidthOfVerticalArea(arr) << endl;
    return 0;
}