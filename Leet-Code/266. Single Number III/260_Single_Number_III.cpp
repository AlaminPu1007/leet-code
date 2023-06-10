#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> res;
        unordered_map<int, int> Map;
        for (auto item : nums)
            Map[item]++;

        for (auto item : Map)
            if (item.second == 1)
                res.push_back(item.first);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 1, 3, 2, 5}, res;
    res = obj.singleNumber(arr);
    for (auto item : res)
        cout << item << endl;
    return 0;
}