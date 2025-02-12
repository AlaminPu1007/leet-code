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

        // Vector to store a min heap for each possible digit sum (0 to 81)
        // The greatest digit sum for the given constraints (nums[i] <= 10^9) occurs for the integer 999999999, which gives a sum of 81
        vector<priority_queue<int, vector<int>, greater<>>> digitGroups(82);

        for (auto item : nums)
        {
            int digit_sum = digitSum(item);
            digitGroups[digit_sum].push(item);

            // removed smallest element from priority queue
            if (digitGroups[digit_sum].size() > 2)
                digitGroups[digit_sum].pop();
        }

        // iterate of the digitGroups and try to keep maximum sum as a result from valid pairs
        for (auto item : digitGroups)
        {
            if (item.size() == 2)
            {
                int firstDigit = item.top();

                // removed from priority_queue
                item.pop();

                int secondDigit = item.top();

                // removed from priority_queue
                item.pop();

                res = max(res, firstDigit + secondDigit);
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