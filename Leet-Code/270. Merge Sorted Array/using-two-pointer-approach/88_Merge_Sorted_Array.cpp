#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int i = m - 1;
        int j = n - 1;
        int k = (m + n) - 1;

        // we only check j >= 0 inside while condition, cause we want all remain value of nums2 should be insert into nums1
        while (j >= 0)
        {
            if (i >= 0 && nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
            else
                nums1[k--] = nums2[j--];
        }
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}, nums2 = {2, 5, 6};
    int m = 3, n = 3;
    obj.merge(nums1, m, nums2, n);
    return 0;
}