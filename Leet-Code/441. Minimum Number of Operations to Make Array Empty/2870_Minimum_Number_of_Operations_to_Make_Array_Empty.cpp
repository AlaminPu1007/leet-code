#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;
        unordered_map<int, int> Map;

        for (int i = 0; i < n; i++)
            Map[nums[i]]++;

        for (auto item : Map)
        {
            if (item.second == 1)
                return -1;

            res += ceil((double)item.second / 3);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 3, 2, 2, 4, 2, 3, 4};
    cout << obj.minOperations(arr) << endl;
    return 0;
}