#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int len = nums.size();
        int sum = 0, digit_sum = 0;
        // count total sum of nums
        for (int i = 0; i < len; i++)
            sum += nums[i];

        for (int i = 0; i < len; i++)
        {
            int d = 0, rev = 0, sum_d = 0;

            int copy_num = nums[i];
            while (copy_num)
            {
                d = copy_num % 10;
                sum_d += d;
                copy_num /= 10;
            }
            digit_sum += sum_d;
        }

        return abs(sum - digit_sum);
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 45, 12, 6};
    obj.differenceOfSum(arr);
    return 0;
}