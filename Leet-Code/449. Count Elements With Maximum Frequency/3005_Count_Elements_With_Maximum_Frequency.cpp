#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> Map;
        int maxFrequency = 0;
        int totalFrequency = 0;

        // count each element frequency from given array
        for (auto item : nums)
        {
            Map[item]++;
            if (Map[item] > maxFrequency)
                maxFrequency = Map[item];
        }

        for (auto item : Map)
        {
            if (item.second == maxFrequency)
                totalFrequency++;
        }

        return (totalFrequency * maxFrequency);
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 5, 3, 4};
    cout << obj.maxFrequencyElements(arr) << endl;
    return 0;
}