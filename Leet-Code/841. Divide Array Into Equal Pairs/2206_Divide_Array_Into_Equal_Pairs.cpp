#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        unordered_map<int, int> Map;

        for (auto item : nums)
            Map[item]++;

        for (auto &item : Map)
        {
            if (item.second % 2 != 0)
                return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 2, 3, 2, 2, 2};
    cout << obj.divideArray(arr) << endl;

    return 0;
}