#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScoreSightseeingPair(vector<int> &values)
    {
        int n = values.size();
        int res = 0;
        int first = values[0];

        for (int i = 1; i < n; i++)
        {
            int second = values[i] - i;
            res = max(res, first + second);
            first = max(first, values[i] + i);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 5};
    cout << obj.maxScoreSightseeingPair(arr) << endl;
    return 0;
}