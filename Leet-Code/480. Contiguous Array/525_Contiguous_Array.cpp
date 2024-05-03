#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0, zero = 0, one = 0;

        unordered_map<int, int> diffIndex;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
                one += 1;

            else
                zero += 1;

            int diff = (one - zero);

            // store their differences into hash table
            // if the do not present
            if (diffIndex.find(diff) == diffIndex.end())
                diffIndex[diff] = i;

            //  if both are equal, then it would be the maxLength of sub-array
            if (one == zero)
                res = (one + zero);

            else
                res = max(res, i - (diffIndex[diff]));
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 0, 0, 1, 1, 1, 0};
    cout << obj.findMaxLength(arr) << endl;
    return 0;
}
