#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int res = 0, cur_sum = 0, max_sum = 0, min_sum = 0;

        for (auto item : nums)
        {
            cur_sum += item;
            // update the result
            res = max({res, abs(cur_sum - max_sum), abs(cur_sum - min_sum)});

            // update max-sum
            max_sum = max(max_sum, cur_sum);

            // update min-sum as well
            min_sum = min(min_sum, cur_sum);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, -3, 2, 3, -4};
    cout << obj.maxAbsoluteSum(arr) << endl;

    return 0;
}