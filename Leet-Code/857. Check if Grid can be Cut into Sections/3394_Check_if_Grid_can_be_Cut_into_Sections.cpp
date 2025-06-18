#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkValidCuts(int n, vector<vector<int>> &rectangles)
    {
        vector<vector<int>> x, y;

        for (auto item : rectangles)
            x.push_back({item[0], item[2]});

        for (auto item : rectangles)
            y.push_back({item[1], item[3]});

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        return max(countValidCuts(x), countValidCuts(y)) >= 3;
    }

private:
    int countValidCuts(vector<vector<int>> &arr)
    {
        int count = 0;
        int prv_end = -1;

        for (auto item : arr)
        {
            int start = item[0], end = item[1];

            if (prv_end <= start)
                count++;

            prv_end = max(prv_end, end);
        }

        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 0, 5, 2}, {0, 2, 2, 4}, {3, 2, 5, 3}, {0, 4, 4, 5}};
    cout << obj.checkValidCuts(5, arr) << endl;

    return 0;
}