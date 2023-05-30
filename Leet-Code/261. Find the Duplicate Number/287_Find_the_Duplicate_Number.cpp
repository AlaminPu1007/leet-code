#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int duplicateValue = -1;
        int len = nums.size();

        for (int i = 0; i < len; i++)
        {
            // if it's negative we need to make it positive
            int currentItem = abs(nums[i]);

            if (nums[currentItem] < 0)
            {
                duplicateValue = currentItem;
                break;
            }

            // make the number as negative for each index
            nums[currentItem] *= -1;
        }

        /*
        However, even though we were not able to meet the problem constraints,
        we can show that we are mindful of the constraints by restoring the array.
        This is done by changing all negative numbers to positive.
        NOTE: without this, we will also get our right answer
        */

        for (int i = 0; i < len; i++)
            if (nums[i] < 0)
                nums[i] *= -1;

        return duplicateValue;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 4, 2, 2};
    cout << obj.findDuplicate(arr) << endl;
    return 0;
}