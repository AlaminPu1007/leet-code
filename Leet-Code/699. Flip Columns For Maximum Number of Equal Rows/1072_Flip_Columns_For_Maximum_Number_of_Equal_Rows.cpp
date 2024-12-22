#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxEqualRowsAfterFlips(vector<vector<int>> &matrix)
    {
        unordered_map<string, int> Map;

        for (auto row : matrix)
        {
            string key = "";

            if (row[0] == 1)
            {
                for (int i = 0; i < row.size(); i++)
                    key += (row[i] == 0 ? '1' : '0');
            }

            else
            {
                for (int i = 0; i < row.size(); i++)
                    key += to_string(row[i]);
            }
            Map[key]++;
        }

        int res = 0;

        for (auto item : Map)
            res = max(res, item.second);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{0, 0, 0}, {0, 0, 1}, {1, 1, 0}};
    cout << obj.maxEqualRowsAfterFlips(arr) << endl;
    return 0;
}