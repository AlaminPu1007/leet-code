/**
 * Time-Limit issue, (Not-Accepted)
 * bute force approach for understanding purposes
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int len = temperatures.size();
        vector<int> res;

        for (int i = 0; i < len; i++)
        {
            bool flag = 0;
            for (int j = i + 1; j < len; j++)
            {
                if (temperatures[i] < temperatures[j])
                {
                    res.push_back(j - i);
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                res.push_back(0);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {73,74,75,71,69,72,76,73};
    vector<int> res = obj.dailyTemperatures(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}