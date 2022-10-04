#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        priority_queue<int> nums3;
        double res = 0.0;

        int len1 = nums1.size(), len2 = nums2.size();

        for (int i = 0; i < len1; i++)
            nums3.push(nums1[i]);

        for (int i = 0; i < len2; i++)
            nums3.push(nums2[i]);

        int len3 = nums3.size();

        for (int i = 0; i < (len3 / 2) - 1; i++)
            nums3.pop();

        if (len3 % 2 != 0)
        {
            nums3.pop();
            res += nums3.top();
        }
        else
        {
            res += nums3.top();
            nums3.pop();
            res += nums3.top();
            res /= 2;
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {1, 2}, nums2 = {3, 4};
    double ans = obj.findMedianSortedArrays(nums1, nums2);
    cout << ans << endl;
    return 0;
}