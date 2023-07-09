#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> iPair;

class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<vector<int>> ans;
        // define an min-heap dsa
        priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
        // define visited array using set
        set<pair<int, int>> visited;

        int n = nums1.size(), m = nums2.size();

        // insert first pair in priority-queue, {sum-of-two item, {index, index}}
        pq.push({nums1[0] + nums2[0], {0, 0}});

        // mark as visited, {index, index}
        visited.insert({0, 0});

        while (k-- && !pq.empty())
        {
            // get index from pq
            int i = pq.top().second.first;
            int j = pq.top().second.second;

            // pop item from pq
            pq.pop();

            // put item into answer array
            ans.push_back({nums1[i], nums2[j]});

            // for first array
            if (i + 1 < n && visited.find({i + 1, j}) == visited.end())
            {
                // insert into queue
                pq.push({nums1[i + 1] + nums2[j], {i + 1, j}});

                // mark as visited
                visited.insert({i + 1, j});
            }

            // for second array
            if (j + 1 < m && visited.find({i, j + 1}) == visited.end())
            {
                // insert into queue
                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});

                // mark as visited
                visited.insert({i, j + 1});
            }
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> nums1 = {1, 7, 11}, nums2 = {2, 4, 6};
    int k = 3;

    vector<vector<int>> ans = obj.kSmallestPairs(nums1, nums2, k);
    for (auto item : ans)
    {
        cout << item[0] << " " << item[1] << endl;
    }
}