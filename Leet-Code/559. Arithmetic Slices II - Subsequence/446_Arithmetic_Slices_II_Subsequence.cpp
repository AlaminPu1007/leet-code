#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<long, int> Map[n];
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                auto diff = (long)nums[i] - nums[j];

                auto item = Map[j].find(diff);

                int countFreq = item == Map[j].end() ? 0 : item->second;

                Map[i][diff] += countFreq + 1;

                res += countFreq;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 4, 6, 8, 10};
    cout << obj.numberOfArithmeticSlices(arr) << endl;
    return 0;
}