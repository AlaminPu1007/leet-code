#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> ans;
        int left = 0;

        for (int i = 0; i < len; i++)
            if (nums[i] % 2 == 0)
                ans.push_back(nums[i]);

        for (int i = 0; i < len; i++)
            if (nums[i] % 2 == 1)
                ans.push_back(nums[i]);

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 1, 2, 4};
    vector<int> res = obj.sortArrayByParity(arr);
    for (auto item : res)
        cout << item << " ";
    return 0;
}