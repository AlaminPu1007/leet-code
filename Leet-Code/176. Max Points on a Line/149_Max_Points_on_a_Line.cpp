#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxPoints(vector<vector<int>> &points)
    {
        int len = points.size();
        if (len == 1)
            return 1;
        int res = 2;

        for (int i = 0; i < len; i++)
        {
            // we need initialized Map for each iteration
            unordered_map<double, int> Map;

            for (int j = 0; j < len; j++)
            {
                // define x
                // int x = points[j][0] - points[i][0];

                // define y
                // int y = points[j][1] - points[i][1];

                // if i and j not equal
                if (j != i)
                {
                    Map[atan2(points[j][1] - points[i][1], points[j][0] - points[i][0])]++;
                }
            }
            // loop through hash-map and get max value
            for (auto item : Map)
            {
                res = max(res, item.second + 1);
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 1},
                               {3, 2},
                               {5, 3},
                               {4, 1},
                               {2, 3},
                               {1, 4}};
    int res = obj.maxPoints(arr);
    cout << "Result is :" << res << endl;
    return 0;
}