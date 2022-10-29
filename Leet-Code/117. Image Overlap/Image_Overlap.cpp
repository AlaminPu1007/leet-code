#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestOverlap(vector<vector<int>> &img1, vector<vector<int>> &img2)
    {
        vector<pair<int, int>> v1, v2;
        int len1 = img1.size(), len2 = img2.size();

        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len2; j++)
            {
                if (img1[i][j] == 1)
                    v1.push_back({i, j});

                if (img2[i][j] == 1)
                    v2.push_back({i, j});
            }
        }
        int ans = 0;
        map<pair<int, int>, int> Map;

        for (auto item : v1)
        {
            for (auto item2 : v2)
            {
                int x = item.first - item2.first;
                int y = item.second - item2.second;

                Map[{x, y}]++;
                ans = max(ans, Map[{x, y}]);
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr1 = {{1, 1, 0}, {0, 1, 0}, {0, 1, 0}}, arr2 = {{0, 0, 0}, {0, 1, 1}, {0, 0, 1}};
    int res = obj.largestOverlap(arr1, arr2);
    cout << res << endl;
    return 0;
}