#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        int res = 1;

        // sort array
        sort(points.begin(), points.end());

        // first it will store 6 after sort
        int lastPoint = points[0][1];

        for (auto item : points)
        {
            if (item[0] > lastPoint)
            {
                res++;
                lastPoint = item[1];
            }
            lastPoint = min(item[1], lastPoint);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    int res = obj.findMinArrowShots(arr);

    cout << res << endl;
    return 0;
}