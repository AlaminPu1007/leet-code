#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRabbits(vector<int> &answers)
    {
        int res = 0;
        unordered_map<int, int> Map;

        for (auto item : answers)
            Map[item]++;

        for (auto item : Map)
        {
            int groupItem = item.first + 1;
            int groupValue = item.second;

            int value = (groupValue / groupItem);
            value += (groupValue % groupItem) ? 1 : 0;

            res += groupItem * value;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1, 2};

    cout << obj.numRabbits(arr) << endl;

    return 0;
}