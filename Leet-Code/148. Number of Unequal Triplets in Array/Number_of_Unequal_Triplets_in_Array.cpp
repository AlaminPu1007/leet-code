#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int unequalTriplets(vector<int> &nums)
    {
        int right = nums.size();
        unordered_map<int, int> Map;
        // make an key-value pairs
        for (int i = 0; i < right; i++)
            Map[nums[i]]++;

        int result = 0, left = 0;

        for (auto item : Map)
        {
            right -= item.second;
            result += left * item.second * right;
            left += item.second;
        }
        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 4, 2, 4, 3};
    int res = obj.unequalTriplets(arr);
    cout << res << endl;
    return 0;
}