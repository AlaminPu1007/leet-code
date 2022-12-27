#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {

        int n = nums.size() - 1, distance = 0;

        for (int i = 0; i < n; i++)
        {
            distance = max(distance, i + nums[i]);

            if (distance == i)
                return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 2, 1, 0, 4};
    bool res = obj.canJump(arr);
    cout << res << endl;
    return 0;
}