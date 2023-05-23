/**
 * Brute force approach
 * If the number of negative numbers is even, the final product will be a positive number because two negative numbers cancel each other
 *  out to produce a positive number.
 *  If the number of negative numbers is odd, the result will be a negative number.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int countNegNum = 0;
        int len = nums.size();

        for (int i = 0; i < len; i++)
        {
            if (nums[i] == 0)
                return 0;
            if (nums[i] < 0)
                countNegNum++;
        }
        return countNegNum % 2 == 0 ? 1 : -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {-1, -2, -3, -4, 3, 2, 1};
    cout << obj.arraySign(arr) << endl;
    return 0;
}