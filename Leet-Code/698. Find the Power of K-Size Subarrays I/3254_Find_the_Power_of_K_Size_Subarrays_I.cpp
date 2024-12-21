#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> resultsArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> res;

        int left = 0, consecutive_count = 1;

        for (int i = 0; i < n; i++)
        {
            if (i > 0 && (nums[i] == (nums[i - 1] + 1)))
                consecutive_count++;

            // check for window out of size
            if (i - left + 1 > k)
            {
                if (nums[left] + 1 == nums[left + 1])
                    consecutive_count -= 1;

                left++;
            }

            // check for valid sub-array
            if (i - left + 1 == k)
                res.push_back(consecutive_count == k ? nums[i] : -1);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {1, 2, 3, 4, 3, 2, 5};
    vector<int> res = obj.resultsArray(arr, 3);

    for (auto item : res)
        cout << item << " ";

    return 0;
}