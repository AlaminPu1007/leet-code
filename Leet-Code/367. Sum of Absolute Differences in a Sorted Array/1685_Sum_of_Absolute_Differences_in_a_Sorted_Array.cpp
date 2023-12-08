#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> preFixSum(n, 0), res;
        preFixSum[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            preFixSum[i] = preFixSum[i - 1] + nums[i];
        }

        for (int i = 0; i < n; i++)
        {
            // calculate left & right sim
            int left_sum = (preFixSum[i] - nums[i]);
            int right_sum = (preFixSum[n - 1] - preFixSum[i]);

            int left = (nums[i] * i) - left_sum;
            int right = right_sum - (nums[i] * (n - i - 1));

            res.push_back(left + right);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 4, 6, 8, 10};
    vector<int> res = obj.getSumAbsoluteDifferences(arr);
    for (auto item : res)
        cout << item << " ";
    return 0;
}