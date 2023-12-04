#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        int n = points.size(), res = 0;

        // find out i to i+1 shortest distance
        for (int i = 0; i < n - 1; i++)
        {
            // current pointer
            int X1 = points[i][0];
            int Y1 = points[i][1];

            // next pointer
            int X2 = points[i + 1][0];
            int Y2 = points[i + 1][1];

            // making dx (distance from x1 to x2) & dy  (distance from xy1 to y2)
            int dx = abs(X1 - X2);
            int dy = abs(Y1 - Y2);

            res += min(dx, dy) + abs(dx - dy);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> points = {{1, 1}, {3, 4}, {-1, 0}};
    cout << obj.minTimeToVisitAllPoints(points) << endl;
    return 0;
}