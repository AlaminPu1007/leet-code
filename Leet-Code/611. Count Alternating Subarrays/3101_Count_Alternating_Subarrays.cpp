#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countAlternatingSubarrays(vector<int> &nums)
    {
        long long res = 0, l = 0, n = nums.size();

        for (long long r = 0; r < n; r++)
        {

            // check the window
            while (r != l && nums[r] == nums[r - 1])
                l++;

            res += (r - l) + 1;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 0, 1, 0};
    cout << obj.countAlternatingSubarrays(arr) << endl;
    return 0;
}