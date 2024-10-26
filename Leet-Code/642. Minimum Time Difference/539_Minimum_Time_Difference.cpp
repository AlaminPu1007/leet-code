#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMinDifference(vector<string> &timePoints)
    {
        vector<bool> bucketSort(60 * 24, false);
        int first_min = INT_MAX, last_min = 0;

        // sort time points after converting them into minutes
        for (int i = 0; i < timePoints.size(); i++)
        {
            int minute = getMinutesFromString(timePoints[i]);

            if (bucketSort[minute])
                return 0;

            bucketSort[minute] = true;

            // keep track of the first minute
            first_min = min(first_min, minute);

            // keep track of the last minute
            last_min = max(last_min, minute);
        }

        // initially calculate circular portion of anti clock wise,
        // have possibility to get minimum result from there
        // ex: last_min = 1420, first_min = 10, then-> ((1440 - 1420) + 10) = 10
        int res = (60 * 24 - last_min + first_min);

        int prv = first_min;

        for (int i = first_min + 1; i < bucketSort.size(); i++)
        {
            if (bucketSort[i])
            {
                int diff = (i - prv);
                res = min(res, diff);
                prv = i;
            }
        }
        return res;
    }

private:
    int getMinutesFromString(string time)
    {
        int h = stoi(time.substr(0, 2));
        int m = stoi(time.substr(3));
        return (h * 60) + m;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"12:12", "12:13"};
    cout << obj.findMinDifference(str) << endl;
    return 0;
}