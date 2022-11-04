#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int str_len = colors.size(), arr_len = neededTime.size();
        int currMaxTime = 0, total = 0;

        for (int i = 0; i < str_len; i++)
        {
            // whenever we get an unique value, make curValue = 0
            if (i > 0 && colors[i] != colors[i - 1])
                currMaxTime = 0;

            // sum of minimum value from consecutive element
            total += min(currMaxTime, neededTime[i]);

            // update currMaxTime with max value
            currMaxTime = max(currMaxTime, neededTime[i]);
        }
        return total;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 1};
    int res = obj.minCost("aabaa", arr);
    cout << res << endl;
    return 0;
}