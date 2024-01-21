#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int left = 0;
        int ans = 0;
        long total = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            long target = nums[right];
            total += target;

            while ((right - left + 1) * target > total + k)
            {
                total -= nums[left];
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 9, 6};
    cout << obj.maxFrequency(arr, 2);
    return 0;
}