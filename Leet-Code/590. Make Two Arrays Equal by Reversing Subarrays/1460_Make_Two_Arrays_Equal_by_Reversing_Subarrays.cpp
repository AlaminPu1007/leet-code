#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
    {
        unordered_map<int, int> Map;

        for (auto item : target)
            Map[item]++;

        for (auto item : arr)
        {
            Map[item]--;

            if (!Map[item])
            {
                Map.erase(item);
            }
        }

        return Map.size() ? false : true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> target = {1, 2, 3, 4}, arr = {2, 4, 1, 3};
    cout << obj.canBeEqual(target, arr) << endl;
    return 0;
}