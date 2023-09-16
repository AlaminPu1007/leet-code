#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int len1 = nums1.size(), len2 = nums2.size();
        vector<int> res;

        for (int i = 0; i < len1; i++)
        {
            int flag = 0, isUpdate = 0;

            for (int j = 0; j < len2; j++)
            {
                if (nums1[i] == nums2[j])
                {
                    flag = 1;
                }
                else if (flag == 1)
                {
                    if (nums1[i] < nums2[j])
                    {
                        isUpdate = 1;
                        res.push_back(nums2[j]);
                        break;
                    }
                }
            }
            if (!isUpdate)
                res.push_back(-1);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> n1 = {4, 1, 2}, n2 = {1, 3, 4, 2};
    vector<int> res = obj.nextGreaterElement(n1, n2);

    for (auto item : res)
    {
        cout << item << " ";
    }
    return 0;
}