#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size(), m = nums2.size();
        unordered_map<int, int> Map;

        for (auto item : nums1)
        {
            Map[item]++;
        }

        for (auto item : nums2)
        {
            auto findItem = Map.find(item);

            if (findItem != Map.end())
                return item;
        }
        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {1, 2, 3, 6}, nums2 = {2, 3, 4, 5};
    cout << obj.getCommon(nums1, nums2) << endl;
    return 0;
}