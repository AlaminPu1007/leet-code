#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumMountainRemovals(vector<int> &nums)
    {
        int n = nums.size();
        // every element has at least one possibility,including it self
        vector<int> lcs(n, 1), lds(n, 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    lcs[i] = max(lcs[i], 1 + lcs[j]);
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[i])
                {
                    lds[i] = max(lds[i], 1 + lds[j]);
                }
            }
        }

        int res = n;

        for (int i = 0; i < n; i++)
        {
            if (lcs[i] != 1 && lds[i] != 1)
            {
                res = min(res, n - lcs[i] - lds[i] + 1);
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 1, 1, 5, 6, 2, 3, 1};
    cout << obj.minimumMountainRemovals(arr) << endl;
    return 0;
}