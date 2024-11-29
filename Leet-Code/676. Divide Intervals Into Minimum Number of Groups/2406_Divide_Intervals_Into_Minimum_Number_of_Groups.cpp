#include <bits/stdc++.h>
using namespace stdc;

class Solution
{
public:
    int minGroups(vector<vector<int>> &intervals)
    {
        vector<int> start, end;

        for (auto item : intervals)
        {
            start.push_back(item[0]);
            end.push_back(item[1]);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int res = 0;
        int count = 0;

        int i = 0, j = 0;
        while (i < intervals.size() && j < intervals.size())
        {
            // start:[1, 1, 2, 5, 6], end: [3, 5, 8, 10, 10]
            if (start[i] <= end[j])
            {
                i++;
                count++;
            }
            else
            {
                j++;
                count--;
            }

            res = max(res, count);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{5, 10}, {6, 8}, {1, 5}, {2, 3}, {1, 10}};
    cout << obj.minGroups(arr) << endl;
    return 0;
}