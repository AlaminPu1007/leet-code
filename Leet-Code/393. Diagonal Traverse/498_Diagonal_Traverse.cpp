#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &mat)
    {
        int n = mat.size(), m = mat[0].size();
        vector<int> res;

        unordered_map<int, vector<int>> Map;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                Map[i + j].push_back(mat[i][j]);
            }
        }

        int count = 0;

        while (Map.find(count) != Map.end())
        {
            if (count % 2)
            {
                for (auto item : Map[count])
                    res.push_back(item);
            }
            else
            {
                reverse(Map[count].begin(), Map[count].end());
                for (auto item : Map[count])
                    res.push_back(item);
            }
            count++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    vector<vector<int>> arr =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    vector<int> res = obj.findDiagonalOrder(arr);

    for (auto item : res)
        cout << item << " ";
    return 0;
}