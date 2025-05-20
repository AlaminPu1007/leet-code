#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCapability(vector<int> &nums, int k)
    {
        int n = nums.size();
        int low = 1, res = 0;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high)
        {
            int mid = (high + low) / 2;

            if (is_valid(nums, k, mid))
            {
                res = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        return res;
    }

private:
    bool is_valid(vector<int> &nums, int k, int mid)
    {
        int count = 0, i = 0;

        while (i < nums.size())
        {
            if (nums[i] <= mid)
            {
                i += 2;
                count++;
            }
            else
                i++;

            if (count == k)
                break;
        }

        return count == k;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 5, 9};

    cout << obj.minCapability(arr, 2) << endl;

    return 0;
}