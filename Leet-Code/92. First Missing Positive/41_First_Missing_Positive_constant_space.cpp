#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int len = nums.size();
        bool contains1 = false;

        for (int i = 0; i < len; i++)
        {
            if (nums[i] == 1)
                contains1 = true;

            // mark all negative numbers include as a 1
            // as well as the number is greater than n, also
            if (nums[i] <= 0 || nums[i] > len)
                nums[i] = 1;
        }

        if (!contains1)
            return 1;

        // find number actual index and mark it's negative
        // to track future this number is present or not
        for (int i = 0; i < len; i++)
        {
            int numberActualIndex = abs(nums[i]) - 1;

            // already negative number ignore
            if (nums[numberActualIndex] < 0)
                continue;

            // add negative sign to track present this number in array
            nums[numberActualIndex] *= -1;
        }

        for (int i = 0; i < len; i++)
        {
            // if number it not negative, that's mean this number is not present
            // in array
            if (nums[i] > 0)
                return i + 1;
        }

        return len + 1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 4, -1, 1};
    cout << obj.firstMissingPositive(arr) << endl;
    return 0;
}