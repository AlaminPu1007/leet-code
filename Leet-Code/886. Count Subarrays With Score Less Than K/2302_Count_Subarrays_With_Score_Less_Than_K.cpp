#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, long long k)
    {
        long long res = 0, sum = 0;
        int n = nums.size(), l = 0;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            while (l < n && sum * (i - l + 1) >= k)
            {
                sum -= nums[l];
                l++;
            }

            res += (i - l + 1);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 1, 4, 3, 5};
    cout << obj.countSubarrays(arr, 10) << endl;

    return 0;
}