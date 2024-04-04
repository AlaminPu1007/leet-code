#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size(), m = nums2.size();

        int first = 0, second = 0;

        while (first < n && second < m)
        {
            if (nums1[first] < nums2[second])
                first++;
            else if (nums1[first] > nums2[second])
                second++;
            else
                return nums1[first];
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