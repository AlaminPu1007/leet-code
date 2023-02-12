#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int len = nums.size(), res = 0;
        if (len == 0)
            return 0;

        int Min = INT_MAX, Max = INT_MIN;
        unordered_map<int, int> Map;

        for (auto item : nums)
        {
            Map[item]++;
            // get maximum value
            Max = max(Max, item);
            // get minimum value
            Min = min(Min, item);
        }

        if (Max == Min)
            return 0;

        return len - Map[Max] - Map[Min];
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {11, 7, 2, 15};
    int res = obj.countElements(arr);
    cout << res << endl;
    return 0;
}