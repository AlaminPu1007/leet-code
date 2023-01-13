#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        int len = nums.size();
        map<int, int> Map;

        for (auto item : nums)
        {
            if (item % 2 == 0)
                Map[item]++;
        }

        int count = INT_MIN, ans = -1;

        for (auto item : Map)
        {
            if (item.second > count)
            {
                ans = item.first, count = item.second;
            }
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 2, 2, 4, 4, 1};
    int res = obj.mostFrequentEven(arr);
    cout << res << endl;
    return 0;
}