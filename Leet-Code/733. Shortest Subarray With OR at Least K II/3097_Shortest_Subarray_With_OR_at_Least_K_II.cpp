#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumSubarrayLength(vector<int> &nums, int k)
    {
        vector<int> bits(32, 0); // Tracks count of set bits at each position
        int res = INT_MAX, l = 0;
        int window_sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            // Add current number to window
            update_bits(bits, nums[i], 1);

            // Contract window while OR value is valid
            while (l <= i &&
                   bits_to_int(bits) >= k)
            {
                // Update minimum length found so far
                res = min(res, i - l + 1);

                // Remove leftmost number and shrink window
                update_bits(bits, nums[l], -1);
                l++;
            }
        }

        return res == INT_MAX ? -1 : res;
    }

private:
    // Updates bit count array when adding/removing a number from window
    void update_bits(vector<int> &bits, int num, int delta)
    {
        for (int bitPosition = 0; bitPosition < 32; bitPosition++)
        {
            // Check if bit is set at current position
            if (num & (1 << bitPosition))
            {
                bits[bitPosition] += delta;
            }
        }
    }

    // Converts bit count array back to number using OR operation
    int bits_to_int(const vector<int> &bits)
    {
        int result = 0;
        for (int i = 0; i < 32; i++)
        {
            // If the bit is set in any number in the window, we should set it in the result
            if (bits[i] > 0) // If the count for that bit position is > 0, set that bit
            {
                result += (1 << i);
            }
        }
        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums = {2, 1, 8};
    int k = 10;
    cout << obj.minimumSubarrayLength(nums, k) << endl; // Output the result
    return 0;
}
