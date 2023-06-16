#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        int len = nums.size();
        vector<string> res;

        for (int i = 0; i < len; i++)
        {
            int start = nums[i];

            while (i + 1 < len && nums[i] + 1 == nums[i + 1])
                i++;

            if (nums[i] != start)
                res.push_back(to_string(start) + "->" + to_string(nums[i]));

            else
                res.push_back(to_string(nums[i]));
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 2, 4, 5, 7};
    vector<string> res = obj.summaryRanges(arr);
    for (auto item : res)
        cout << item << " ";
    return 0;
}