#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs(vector<int> &nums, int k)
    {
        int count = 0, len = nums.size();
        map<int, vector<int>> Map;

        for (int i = 0; i < len; i++)
        {
            auto item = Map.find(nums[i]);

            if (item == Map.end())
                Map[nums[i]].push_back(i);

            else
            {
                // Now we can simply iterate over indices of each element stored in vector mapped
                // according to first occurence of each element accordingly stored in our Map
                for (auto j : Map[nums[i]])
                    if ((i * j) % k == 0)
                        count++;

                Map[nums[i]].push_back(i);
            }
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 1, 2, 2, 2, 1, 3};
    obj.countPairs(arr, 2);
    return 0;
}