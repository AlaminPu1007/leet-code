#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> avoidFlood(vector<int> &rains)
    {
        set<int> zero;
        unordered_map<int, int> Map;
        int len = rains.size();

        vector<int> result(len, -1);

        for (int i = 0; i < len; i++)
        {
            if (rains[i] == 0)
            {
                zero.insert(i);
                result[i] = 1;
            }
            else
            {
                if (Map.count(rains[i]))
                {
                    int lastIndex = Map[rains[i]];
                    auto zeroIndex = zero.upper_bound(lastIndex);

                    if (zeroIndex == zero.end())
                    {
                        return {};
                    }
                    result[*zeroIndex] = rains[i];
                    zero.erase(zeroIndex);
                }
                // insert in map
                Map[rains[i]] = i;
            }
        }
        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 0, 0, 2, 1};
    vector<int> ans = obj.avoidFlood(arr);
    int len = ans.size();

    for (int i = 0; i < len; i++)
        cout << ans[i] << " ";

    return 0;
}