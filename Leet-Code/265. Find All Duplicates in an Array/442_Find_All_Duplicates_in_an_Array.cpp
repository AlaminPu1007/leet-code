#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        int len = nums.size(), duplicate = -1;
        for (int i = 0; i < len; i++)
        {
            // evaluate index of selected element if array would have been sorted..
            int curItem = abs(nums[i]) - 1;

            nums[curItem] *= -1;

            if (nums[curItem] > 0)
            {
                ans.push_back(curItem + 1);
            }
        }

        for (int i = 0; i < len; i++)
            if (nums[i] < 0)
                nums[i] *= -1;

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> res = obj.findDuplicates(arr);

    for (auto item : res)
        cout << item << " ";

    return 0;
}