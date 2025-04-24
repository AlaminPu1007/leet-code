#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        map<int, int> Map;
        vector<vector<int>> res;

        // iterate over the nums1 array, and create a frequency map
        for (auto item : nums1)
            Map[item[0]] += item[1];

        // iterate over the nums2 array, and create a frequency map
        for (auto item : nums2)
            Map[item[0]] += item[1];

        for (auto item : Map)
            res.push_back({item.first, item.second});

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> nums1 = {{1, 2}, {2, 3}, {4, 5}}, nums2 = {{1, 4}, {3, 2}, {4, 1}};

    vector<vector<int>> res = obj.mergeArrays(nums1, nums2);

    for (auto item : res)
        cout << item[0] << " -> " << item[1] << endl;

    return 0;
}