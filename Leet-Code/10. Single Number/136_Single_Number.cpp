#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int i, len = nums.size();
        map<int, int> Map;

        for (i = 0; i < len; i++)
            Map[nums[i]]++;
        for (auto item : Map)
        {
            if (item.second == 1)
            {
                return item.first;
            }
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 1, 2, 1, 2};
    obj.singleNumber(arr);
    return 0;
}