#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        int res = 0, left = 0, right = n - 1;

        int maxLeftValue = height[0], maxRightValue = height[n - 1];

        while (left <= right)
        {
            // for left pointer
            if (maxLeftValue < maxRightValue)
            {
                // get the max value from left pointer
                // This always ensure us to positive value instead of negative
                maxLeftValue = max(maxLeftValue, height[left]);
                // sum of the result
                res += maxLeftValue - height[left];
                left++;
            }
            // for right pointer
            else
            {
                // get the max value from right pointer
                // This always ensure us to positive value instead of negative
                maxRightValue = max(maxRightValue, height[right]);
                // sum of the result
                res += maxRightValue - height[right];
                right--;
            }
        }

        return res;
    }
};

// Entry point of the program
int main(void)
{
    Solution obj; // Create an instance of the Solution class
    vector<int> arr = {4, 2, 0, 3, 2, 5};
    cout << obj.trap(arr) << endl;
    return 0; // Return 0 to indicate successful execution
}