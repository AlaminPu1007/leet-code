#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {

        int len = temperatures.size();
        vector<int> res(temperatures.size());
        stack<int> s;

        for (int i = 0; i < len; i++)
        {
            while (!s.empty() && temperatures[i] > temperatures[s.top()])
            {
                res[s.top()] = i - s.top();
                s.pop();
            }

            s.push(i);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> res = obj.dailyTemperatures(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}