#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimizedMaximum(int n, vector<int> &quantities)
    {
        int res = 0;

        int maxQuantity = *max_element(quantities.begin(), quantities.end());

        int low = 1, high = maxQuantity;

        // perform a binary search to get as much as possible minimum result

        while (low <= high)
        {
            int mid = (high + low) / 2; // to avoid overflow: low + (high - low) / 2

            if (is_valid_distribution(mid, n, quantities))
            {
                res = mid;

                // looking for more small as much as possible
                high = mid - 1;
            }
            // to small, looking for more larger number
            else
            {
                low = mid + 1;
            }
        }

        return res;
    }

private:
    bool is_valid_distribution(int x, int n, vector<int> &quantities)
    {
        int count = 0;

        // iterate over the quantities array and check it's have a valid distributions
        for (auto item : quantities)
        {
            count += (item + x - 1) / x; // ceil(item / x);
        }

        return count <= n;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {15, 10, 10};
    cout << obj.minimizedMaximum(7, arr) << endl;
    return 0;
}