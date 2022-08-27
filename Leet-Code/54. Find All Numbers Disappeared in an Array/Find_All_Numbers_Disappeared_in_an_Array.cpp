
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int len = nums.size();
        int freq[100000] = {0};

        vector<int> res;

        for (int i = 0; i < len; i++)
        {
            freq[nums[i]] = 1;
        }

        for (int i = 1; i <= len; i++)
        {
            if (freq[i] <= 0)
                res.push_back(i);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1};

    vector<int> res = obj.findDisappearedNumbers(arr);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}