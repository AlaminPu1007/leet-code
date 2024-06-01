#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        int n = nums.size(), ans = 0;
        int left_near = 0, left_far = 0;

        unordered_map<int, int> freq;

        for (int right = 0; right < n; right++)
        {
            freq[nums[right]]++;

            // if map is exceed than k value
            // we need to removed them from map
            while (freq.size() > k)
            {
                // remove from left portion
                freq[nums[left_near]]--;

                if (freq[nums[left_near]] == 0)
                    freq.erase(nums[left_near]);

                left_near++;
                // update left_far to exactly left_near
                left_far = left_near;
            }

            // if frequency of element greater than 1
            // we need to decrease it's frequency
            while (freq[nums[left_near]] > 1)
            {
                freq[nums[left_near]]--;
                left_near++;
            }

            // update result if it's a valid good sub-arrays
            if (freq.size() == k)
                ans += ((left_near - left_far) + 1);
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 2, 1, 2, 2, 2, 1, 1};
    cout << obj.subarraysWithKDistinct(arr, 2) << endl;
    return 0;
}