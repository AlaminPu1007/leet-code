#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        vector<int> maxLeftHeight(n, 0), maxRightHeight(n, 0), minValue(n, 0);
        int res = 0;

        maxLeftHeight[0] = height[0];
        maxRightHeight[n - 1] = height[n - 1];

        for (int i = 1; i < n; i++)
        {
            maxLeftHeight[i] = max(maxLeftHeight[i - 1], height[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            maxRightHeight[i] = max(height[i], maxRightHeight[i + 1]);
        }

        for (int i = 0; i < n; i++)
        {
            int value = min(maxLeftHeight[i], maxRightHeight[i]) - height[i];
            res += value > 0 ? value : 0;
        }

        return res;
    }
};

// Entry point of the program
int main(void)
{
    Solution obj; // Create an instance of the Solution class
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << obj.trap(arr) << endl;
    return 0; // Return 0 to indicate successful execution
}