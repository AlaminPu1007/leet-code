#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // sort value by value
    static bool comp(pair<int, int> a, pair<int, int> b)
    {
        if (a.second < b.second)
            return true;
        else if (a.second == b.second)
            return a.first > b.first;

        return false;
    }

    vector<int> frequencySort(vector<int> &nums)
    {
        int len = nums.size();
        map<int, int> Map;

        for (int i = 0; i < len; i++)
            Map[nums[i]]++;

        vector<pair<int, int>> pairVector;

        for (auto item : Map)
            pairVector.push_back(item);

        // sort vector pair array
        sort(pairVector.begin(), pairVector.end(), comp);

        vector<int> ans;

        for (auto item : pairVector)
        {
            int i = item.second;
            while (i--)
            {
                ans.push_back(item.first);
            }
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1, 2, 2, 2, 3};
    vector<int> ans = obj.frequencySort(arr);

    int len = ans.size();
    for (int i = 0; i < len; i++)
        cout << ans[i] << " ";
    return 0;
}