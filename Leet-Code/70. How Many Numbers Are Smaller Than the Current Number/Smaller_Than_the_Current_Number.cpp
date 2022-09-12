// T.C->O(n.log(n)),S.C->O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int len = nums.size(), j = 0;
        map<int, int> Map;
        vector<int> ans, copy = nums;

        sort(copy.begin(), copy.end());

        Map[copy[0]] = 0;

        for (int i = 1; i < len; i++)
        {
            if (copy[i - 1] != copy[i])
                Map[copy[i]] = i;
        }

        for (int i = 0; i < len; i++)
        {
            ans.push_back(Map[nums[i]]);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {8, 1, 2, 2, 3};
    vector<int> res = obj.smallerNumbersThanCurrent(arr);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}