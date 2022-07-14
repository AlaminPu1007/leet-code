#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int len = nums.size();
        map<int, int> Map;

        if (len < 2)
            return false;

        // Make an key value pairs
        for (int i = 0; i < len; i++)
            Map[nums[i]]++;

        for (auto item : Map)
        {
            if (item.second > 1)
                return true;
        }

        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4};

    bool res = obj.containsDuplicate(arr);
    cout << res;
    return 0;
}
