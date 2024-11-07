#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSquareStreak(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;

        unordered_map<int, int> Map;

        for (auto item : nums)
            Map[item]++;

        for (auto item : nums)
        {
            int currentStreak = 0;
            long long current = item;

            while (Map.find(current) != Map.end())
            {
                currentStreak++;

                // Break if the next square would be larger than 10^5 (problem
                // constraint)
                if (current * current > 1e5)
                    break;

                current = current * current;
            }

            res = max(res, currentStreak);
        }

        return res < 2 ? -1 : res;
    }
};

int main(void)
{

    Solution obj;
    vector<int> arr = {4, 3, 6, 16, 8, 2};
    cout << obj.longestSquareStreak(arr) << endl;
    return 0;
}