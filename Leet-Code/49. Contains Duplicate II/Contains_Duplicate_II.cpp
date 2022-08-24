
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {

        map<int, int> Map;
        int len = nums.size();

        for (int i = 0; i < len; i++)
        {
            auto item = Map.find(nums[i]);

            if (item != Map.end())
            {
                if (abs(i - item->second) <= k)
                    return true;

                else
                    Map[nums[i]] = i;
            }
            else
                Map[nums[i]] = i;
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 0, 1, 1};
    bool res = obj.containsNearbyDuplicate(arr, 1);

    cout << res << endl;
}