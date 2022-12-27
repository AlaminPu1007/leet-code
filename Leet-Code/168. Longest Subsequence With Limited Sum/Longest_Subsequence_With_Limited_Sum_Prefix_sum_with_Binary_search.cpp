#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
    {
        int len1 = nums.size(), len2 = queries.size();
        vector<int> ans;

        // sort nums
        sort(nums.begin(), nums.end());

        // make an prefix sum of actual array
        for (int i = 1; i < len1; i++)
        {
            nums[i] = nums[i - 1] + nums[i];
        }

        for (int i = 0; i < len2; i++)
        {
            int index = BinarySearch(queries[i], nums);

            ans.push_back(index);
        }

        return ans;
    }

    // Binary search approach to find value from nums array
    int BinarySearch(int target, vector<int> nums)
    {
        int left = 0, right = nums.size() - 1;

        while (left < right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
                return mid + 1;

            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        return nums[left] > target ? left : left + 1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {4, 2, 5, 1, 6, 13}, queries = {3, 10, 21, 2};
    vector<int> res = obj.answerQueries(nums, queries);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}