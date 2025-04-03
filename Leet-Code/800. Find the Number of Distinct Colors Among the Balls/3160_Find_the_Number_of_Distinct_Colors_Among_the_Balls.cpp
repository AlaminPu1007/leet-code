#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> queryResults(int limit, vector<vector<int>> &queries)
    {
        vector<int> res;
        unordered_map<int, int> colorsCount, colors;

        for (auto item : queries)
        {
            int ball = item[0];
            int colorCode = item[1];

            int prevColor = -1;

            if (colors.count(ball))
                prevColor = colors[ball];

            // mark this colors within array
            colors[ball] = colorCode;

            if (prevColor != -1)
            {
                colorsCount[prevColor]--;

                if (colorsCount[prevColor] == 0)
                    colorsCount.erase(prevColor);
            }

            colorsCount[colorCode]++;

            res.push_back(colorsCount.size());
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 4;
    vector<vector<int>> q = {{0, 1}, {1, 2}, {2, 2}, {3, 4}, {4, 5}};

    vector<int> res = obj.queryResults(n, q);

    for (auto item : res)
        cout << item << " ";

    return 0;
}