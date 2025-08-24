#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        int res = 1;

        // sort array to get sub-sequence
        sort(nums.begin(), nums.end());

        int minNumber = nums[0];

        for (int i = 1; i < n; i++)
        {
            if (nums[i] - minNumber > k)
            {
                res++;
                minNumber = nums[i];
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 6, 1, 2, 5};
    cout << obj.partitionArray(arr, 2) << endl;

    return 0;
}