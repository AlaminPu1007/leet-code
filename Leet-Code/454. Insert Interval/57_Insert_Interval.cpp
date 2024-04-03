#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        vector<vector<int>> res;

        int i = 0, n = intervals.size();

        for (i = 0; i < n; i++)
        {
            if (intervals[i][1] < newInterval[0])
            {
                res.push_back(intervals[i]);
            }
            else if (intervals[i][1] >= newInterval[0] && (intervals[i][0] <= newInterval[1]))
            {
                newInterval[0] = min(intervals[i][0], newInterval[0]);
                newInterval[1] = max(intervals[i][1], newInterval[1]);
            }
            else
                break;
        }

        res.push_back(newInterval);

        while (i < n)
        {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> intervals = {{1, 3}, {6, 9}, {8, 10}, {12, 16}};
    vector<int> newInterVal = {2, 5};
    vector<vector<int>> ans = obj.insert(intervals, newInterVal);

    for (auto item : ans)
    {
        for (auto it : item)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}