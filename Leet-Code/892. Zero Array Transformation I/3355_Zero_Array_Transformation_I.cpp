#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        vector<int> diffArray(n, 0), res(n, 0);

        for (auto &item : queries)
        {
            int start = item[0];
            int end = item[1];

            diffArray[start] += 1;

            if (end + 1 < n)
                diffArray[end + 1] -= 1;
        }

        int cumSum = 0;

        for (int i = 0; i < n; i++)
        {
            cumSum += diffArray[i];
            res[i] = cumSum;
        }

        for (int i = 0; i < n; i++)
        {
            if (res[i] < nums[i])
                return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {4, 3, 2, 1};
    vector<vector<int>> queries = {{1, 3}, {0, 2}};

    cout << obj.isZeroArray(nums, queries) << endl;

    return 0;
}