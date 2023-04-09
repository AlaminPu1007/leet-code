#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimizeArrayValue(vector<int> &nums)
    {
        int len = nums.size();
        long long int result = nums[0], totalSum = nums[0];

        // we iterate our loop form index-1 to avoid bottleneck
        // cause index-0 will always increase, and from problem statement i should greater than 0(1 <= i < n)
        for (int i = 1; i < len; i++)
        {
            totalSum += nums[i];
            long long int value = ceil((double)totalSum / (double)(i + 1));
            result = max(result, value);
        }
        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {13, 13, 20, 0, 8, 9, 9};
    cout << obj.minimizeArrayValue(arr) << endl;

    return 0;
}