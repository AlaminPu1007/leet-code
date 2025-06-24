#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumIndex(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> leftCount, rightCount;

        for (auto item : nums)
            rightCount[item]++;

        for (int i = 0; i < nums.size(); i++)
        {
            // add current item to the leftCount
            leftCount[nums[i]]++;

            // removed current item from the right counter
            rightCount[nums[i]]--;

            if (rightCount[nums[i]] == 0)
                rightCount.erase(nums[i]);

            int left_len = i + 1;
            int right_len = nums.size() - i - 1;

            if (2 * leftCount[nums[i]] > left_len && 2 * rightCount[nums[i]] > right_len)
                return i;
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 2, 2};

    cout << obj.minimumIndex(arr) << endl;
    return 0;
}