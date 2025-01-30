#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        long long sum = 0, res = 0;
        int n = nums.size(), l = 0;

        unordered_map<int, int> Count;

        for (int i = 0; i < n; i++)
        {
            sum += (long long)(nums[i]);
            Count[nums[i]]++;

            // if it's a valid window exact same as k
            if (i - l + 1 > k)
            {
                int removingElement = nums[l];

                sum -= removingElement;
                Count[removingElement]--;

                if (Count[removingElement] <= 0)
                    Count.erase(removingElement);

                l++;
            }

            if (Count.size() == k)
                res = max(sum, res);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 4, 4};
    cout << obj.maximumSubarraySum(arr, 3) << endl;
    return 0;
}