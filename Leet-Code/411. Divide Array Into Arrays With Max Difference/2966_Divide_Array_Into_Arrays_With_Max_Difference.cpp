#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        int n = nums.size();

        vector<vector<int>> res;

        // sort the array
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i += 3)
        {

            if ((nums[i + 2] - nums[i]) > k)
                return {};

            vector<int> list;

            for (int j = i; j <= i + 2; j++)
            {

                list.push_back(nums[j]);
            }

            res.push_back(list);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {1, 3, 3, 2, 7, 3};
    vector<vector<int>> res = obj.divideArray(nums, 3);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}