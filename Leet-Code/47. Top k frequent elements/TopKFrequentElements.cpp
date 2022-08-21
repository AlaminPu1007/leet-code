
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        int len = nums.size();
        map<int, int> Map;
        priority_queue<pair<int, int>> pq;
        vector<int> result;

        for (int i = 0; i < len; i++)
            Map[nums[i]]++;

        for (auto item : Map)
            pq.push(make_pair(item.second, item.first));

        while (k--)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1, 1, 2, 2, 3};
    vector<int> res = obj.topKFrequent(arr, 2);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}