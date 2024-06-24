#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        int maxNum = *max_element(nums.begin(), nums.end());
        long long ans = 0;

        int left = 0, count = 0;

        for (int right = 0; right < n; right++)
        {
            if (nums[right] == maxNum)
                count++;

            while (count == k)
            {
                if (nums[left] == maxNum)
                    count--;

                left++;
            }

            ans += left;
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {1, 3, 2, 3, 3};
    cout << obj.countSubarrays(nums, 2) << endl;
    return 0;
}