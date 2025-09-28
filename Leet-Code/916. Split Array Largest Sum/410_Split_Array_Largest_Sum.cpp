#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int splitArray(vector<int> &nums, int k)
    {
        int res = -1;
        int maxNumber = *max_element(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int low = maxNumber, high = sum;

        while (low <= high)
        {
            int mid = low + ((high - low) / 2);

            if (isValid(nums, k, mid))
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
    int isValid(vector<int> &nums, int k, int maxNo)
    {
        int sum = 0, n = nums.size();
        int count = 1;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            if (sum > maxNo)
            {
                count++;
                sum = nums[i];
            }

            if (count > k)
                return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 2, 5, 10, 8};
    cout << obj.splitArray(arr, 2) << endl;

    return 0;
}