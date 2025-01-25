#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestCombination(vector<int> &candidates)
    {
        int n = candidates.size();

        // can be at most 32 bits
        vector<int> bitCounts(32, 0);

        int res = 0;

        // iterate over the array
        for (auto item : candidates)
        {
            // i = can be 32 at most
            int i = 0;

            while (item > 0)
            {
                // count each position bits
                // if a bit's is set then the 'i'th' position will by increment by one
                bitCounts[i] += item & 1;

                // update item to get next bits
                item >>= 1;

                res = max(res, bitCounts[i]);
                i++;
            }
        }

        return res;
    }
};

int main(void)
{
    vector<int> arr = {16, 17, 71, 62, 12, 24, 14};
    Solution obj;
    cout << obj.largestCombination(arr) << endl;
    return 0;
}