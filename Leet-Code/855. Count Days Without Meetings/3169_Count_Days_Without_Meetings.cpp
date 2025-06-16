#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countDays(int days, vector<vector<int>> &meetings)
    {
        int n = meetings.size();

        // sort the array
        sort(meetings.begin(), meetings.end());

        int res = 0, lastEnd = 0;

        for (auto item : meetings)
        {
            int start = item[0];
            int end = item[1];

            if (start > lastEnd + 1)
                res += (start - lastEnd - 1);

            lastEnd = max(lastEnd, end);
        }

        res += days - lastEnd;

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{2, 4}, {1, 3}};

    cout << obj.countDays(5, arr) << endl;

    return 0;
}