#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans, temp;

        sort(nums.begin(), nums.end());
        vector<int> dp(n + 1, -1);

        Solved(0, nums, n, ans, temp, dp);

        return ans;
    }

private:
    void Solved(int i, vector<int> &nums, int n, vector<int> &ans, vector<int> &temp, vector<int> &dp)
    {
        if (i >= n)
        {
            if (ans.size() <= temp.size())
                ans = temp;
            return;
        }

        if ((temp.empty() || nums[i] % temp.back() == 0) & dp[i] < (int)temp.size() + 1)
        {
            dp[i] = temp.size() + 1;

            temp.push_back(nums[i]);

            Solved(i + 1, nums, n, ans, temp, dp);

            temp.pop_back();
        }

        Solved(i + 1, nums, n, ans, temp, dp);
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 4, 8};

    vector<int> res = obj.largestDivisibleSubset(arr);

    for (auto item : res)
        cout << item << " ";

    return 0;
}