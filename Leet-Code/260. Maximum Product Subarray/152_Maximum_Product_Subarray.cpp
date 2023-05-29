#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int len = nums.size();
        int res = INT_MIN, product = 1;

        // traversal from left of the element
        for (int i = 0; i < len; i++)
        {
            // get product of array
            product *= nums[i];
            res = max(res, product);

            if (product == 0)
                product = 1;
        }

        product = 1;

        // traversal from right of the element
        for (int i = len - 1; i >= 0; i--)
        {
            // get product of array
            product *= nums[i];
            res = max(res, product);

            if (product == 0)
                product = 1;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, -2, 4};
    cout << obj.maxProduct(arr) << endl;

    return 0;
}