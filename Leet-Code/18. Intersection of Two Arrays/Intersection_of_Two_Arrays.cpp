#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> Map;
        vector<int> res;
        int nums1_len = nums1.size(), nums2_len = nums2.size();

        // make an key value pairs of fist array
        for (int i = 0; i < nums1_len; i++)
            Map[nums1[i]] = 1;

        for (int i = 0; i < nums2_len; i++)
        {
            // Map[nums2[i]]++;
            auto item = Map.find(nums2[i]);
            if (item != Map.end())
                Map[nums2[i]] = 2;
        }

        for (auto item : Map)
            if (item.second == 2)
                res.push_back(item.first);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {4, 9, 5}, nums2 = {9, 4, 9, 8, 4};

    vector<int> res = obj.intersection(nums1, nums2);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}