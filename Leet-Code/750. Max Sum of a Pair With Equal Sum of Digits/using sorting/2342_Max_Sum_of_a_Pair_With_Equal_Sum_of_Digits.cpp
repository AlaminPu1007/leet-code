#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumSum(vector<int> &nums)
    {
        // initialized necessary variables
        int n = nums.size();
        int res = -1;
        vector<pair<int, int>> digitsGroups; // {digitSum, nums[i]}

        for (auto item : nums)
        {
            int digit_sum = digitSum(item);

            // now store them into array
            digitsGroups.push_back({digit_sum, item});
        }

        // now sort the array according to their respective digit_sum
        // ex: [{9, 18}, {9, 36}...]
        sort(digitsGroups.begin(), digitsGroups.end());

        for (int i = 1; i < n; i++)
        {
            int currentDigitSum = digitsGroups[i].first;
            int prevDigitSum = digitsGroups[i - 1].first;

            if (currentDigitSum == prevDigitSum)
            {
                int currentSum = digitsGroups[i].second + digitsGroups[i - 1].second;
                res = max(res, currentSum);
            }
        }

        return res;
    }

private:
    int digitSum(int num)
    {
        int res = 0;

        while (num)
        {
            res += num % 10;
            num /= 10;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {368, 369, 307, 304, 384, 138, 90, 279, 35, 396, 114, 328, 251, 364, 300, 191, 438, 467, 183};
    cout << obj.maximumSum(arr) << endl;

    return 0;
}