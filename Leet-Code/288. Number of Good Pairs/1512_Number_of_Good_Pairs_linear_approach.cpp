#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int len = nums.size();
        int res = 0;

        unordered_map<int, int> Map;

        for (int i = 0; i < len; i++)
        {
            res += Map[nums[i]]++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 1, 1, 3};
    cout << obj.numIdenticalPairs(arr) << endl;
    return 0;
}