#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> result;
        map<int, int> Map;
        int len = nums1.size(), len2 = nums2.size();

        for (int i = 0; i < len; i++)
            Map[nums1[i]]++;

        for (int i = 0; i < len2; i++)
        {
            if (Map[nums2[i]] > 0)
            {
                result.push_back(nums2[i]);
                Map[nums2[i]]--;
            }
        }
        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {4, 9, 5}, nums2 = {9, 4, 9, 8, 4};

    vector<int> res = obj.intersect(nums1, nums2);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}