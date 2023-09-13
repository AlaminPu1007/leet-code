#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {
        int len = groupSizes.size();
        vector<vector<int>> res;

        // +1, because of 0 base-indexing system
        vector<int> groupList[len + 1];

        for (int i = 0; i < len; i++)
        {
            groupList[groupSizes[i]].push_back(i);

            if (groupSizes[i] == groupList[groupSizes[i]].size())
            {
                res.push_back(groupList[groupSizes[i]]);
                groupList[groupSizes[i]].clear();
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    // vector<int> arr = {8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> arr = {3, 3, 3, 3, 3, 1, 3};
    vector<vector<int>> res = obj.groupThePeople(arr);

    for (int i = 0; i < res.size(); i++)
    {
        for (auto item : res[i])
        {
            cout << item << " ";
        }
        cout << endl;
    }
    return 0;
}