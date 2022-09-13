#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        int len = nums.size();
        map<int, int> Map;

        for (int i = 0; i < len; i++)
            Map[nums[i]]++;

        for (int i = 0; i < len; i++)
        {
            auto find_item = Map.find(original);
            if (find_item != Map.end())
            {
                original *= 2;
            }
            else
                return original;
        }
        return original;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {5, 3, 6, 1, 12};
    int res = obj.findFinalValue(arr, 3);

    // cout<<res<<endl;
    return 0;
}