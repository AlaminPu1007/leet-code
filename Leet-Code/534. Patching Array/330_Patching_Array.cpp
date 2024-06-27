#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPatches(vector<int> &nums, int n)
    {
        int l = nums.size();
        long long int range = 1;
        int res = 0;
        int i = 0;

        while (range <= n)
        {
            if (i < l && nums[i] <= range)
            {
                range += nums[i];
                i++;
            }
            // do stuff for missing element
            else
            {
                range += range;
                res++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3};
    cout << obj.minPatches(arr, 2147483647) << endl;
    return 0;
}