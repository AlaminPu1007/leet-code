#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> res;

        if (intervals.size() == 0)
            return res;

        // sort the intervals, complexity -> O(n * log(n))
        sort(intervals.begin(), intervals.end());

        vector<int> tempInterval = intervals[0];

        for (auto item : intervals)
        {
            if (item[0] <= tempInterval[1])
            {
                // update tempInterval[1] value with max value
                tempInterval[1] = max(item[1], tempInterval[1]);
            }
            // put into result array
            else
            {
                // update tempInterval with item, for next iterations
                res.push_back(tempInterval);
                tempInterval = item;
            }
        }

        // put last item into result
        res.push_back(tempInterval);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans = obj.merge(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}