/**
 * This solution still has time-limit issue, checkout our optimal approach
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    unordered_map<string, int> memo;

private:
    int DFS(vector<int> &nums, int left, int xSum, int right, int count)
    {

        if (xSum == 0)
        {
            return count;
        }
        if (left > right || xSum < 0)
            return 1e6;

        // make unique key for hash-map
        string key = to_string(left) + "=" + to_string(right) + "=" + to_string(xSum);

        if (memo.count(key))
            return memo[key];

        int leftSum = DFS(nums, left + 1, xSum - nums[left], right, count + 1);
        int rightSum = DFS(nums, left, xSum - nums[right], right - 1, count + 1);

        // cout << leftSum << " " << rightSum << " " << memo[key] << endl;

        return memo[key] = min(leftSum, rightSum);
    };

public:
    int minOperations(vector<int> &nums, int x)
    {
        int len = nums.size() - 1;

        int res = DFS(nums, 0, x, nums.size() - 1, 0);
        return res >= 1e6 ? -1 : res;
    }
};

int main(void)
{
    Solution obj;

    int x = 894887480;
    vector<int> nums = {1241, 8769, 9151, 3211, 2314, 8007, 3713, 5835, 2176, 8227, 5251, 9229, 904, 1899, 5513, 7878, 8663, 3804, 2685, 3501, 1204, 9742, 2578, 8849, 1120, 4687, 5902, 9929, 6769, 8171, 5150, 1343, 9619, 3973, 3273, 6427, 47, 8701, 2741, 7402, 1412, 2223, 8152, 805, 6726, 9128, 2794, 7137, 6725, 4279, 7200, 5582, 9583, 7443, 6573, 7221, 1423, 4859, 2608, 3772, 7437, 2581, 975, 3893, 9172, 3, 3113, 2978, 9300, 6029, 4958, 229, 4630, 653, 1421, 5512, 5392, 7287, 8643, 4495, 2640, 8047, 7268, 3878, 6010, 8070, 7560, 8931, 76, 6502, 5952, 4871, 5986, 4935, 3015, 8263, 7497, 8153, 384, 1136};
    
    cout << obj.minOperations(nums, x) << endl;
    return 0;
}