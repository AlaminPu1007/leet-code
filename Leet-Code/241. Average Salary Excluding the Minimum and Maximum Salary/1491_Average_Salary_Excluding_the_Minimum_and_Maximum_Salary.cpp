#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double average(vector<int> &salary)
    {
        int maxValue = INT_MIN;
        int minValue = INT_MAX;

        int res = 0, len = salary.size();

        for (int i = 0; i < len; i++)
        {
            // sum of all salaries
            res += salary[i];
            // get min value from salary
            minValue = min(minValue, salary[i]);
            // get max-value
            maxValue = max(maxValue, salary[i]);
        }

        return (double)(res - minValue - maxValue) / (double)(len - 2);
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {8000, 9000, 2000, 3000, 6000, 1000};
    cout << obj.average(arr) << endl;
    return 0;
}