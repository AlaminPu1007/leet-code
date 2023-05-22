#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> res(len);

        res[0] = 1;
        for (int i = 1; i < len; i++)
            res[i] = res[i - 1] * nums[i - 1];

        int right = 1;
        for (int i = len - 1; i >= 0; i--)
        {
            res[i] *= right;
            right *= nums[i];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4};
    vector<int> res = obj.productExceptSelf(arr);
    for (auto item : res)
        cout << item << " ";
    return 0;
}