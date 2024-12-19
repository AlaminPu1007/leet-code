#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {
        long long res = 0;
        int n = skill.size();
        int total = 0;
        unordered_map<int, int> Map;

        for (auto item : skill)
        {
            total += item;
            Map[item]++;
        }

        if (total % (n / 2))
            return -1;

        int target = (total / (n / 2));

        for (auto item : Map)
        {
            int value = item.first;
            int freq = item.second;
            int diff = (target - value);

            if (Map.find(diff) == Map.end() || freq != Map[diff])
            {
                return -1;
            }

            res += (long long)freq * (long long)value * (long long)diff;
        }

        return res / 2;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 2, 5, 1, 3, 4};
    cout << obj.dividePlayers(arr) << endl;
    return 0;
}