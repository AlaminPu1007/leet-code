#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = queries.size();
        int left = 0, right = n;

        if (!canFormZeroArray(nums, queries, right))
            return -1;

        while (left <= right)
        {
            int mid = (right + left) / 2;

            if (canFormZeroArray(nums, queries, mid))

                right = mid - 1;

            else

                left = mid + 1;
        }

        return left;
    }

private:
    bool canFormZeroArray(vector<int> &nums, vector<vector<int>> &queries, int k)
    {
        int sum = 0;
        int n = nums.size();
        vector<int> diffArray(n + 1);

        for (int i = 0; i < k; i++)
        {
            int start = queries[i][0], end = queries[i][1], value = queries[i][2];

            diffArray[start] += value;
            diffArray[end + 1] -= value;
        }

        for (int i = 0; i < n; i++)
        {
            sum += diffArray[i];

            if (sum < nums[i])
                return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> q = {{0, 2, 1}, {0, 2, 1}, {1, 1, 3}};
    vector<int> arr = {2, 0, 2};

    cout << obj.minZeroArray(arr, q) << endl;

    return 0;
}