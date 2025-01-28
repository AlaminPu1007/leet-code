#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<long long, int> IPair;

public:
    int shortestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size();
        int res = INT_MAX;

        // {prefix_sum, end_idx}
        priority_queue<IPair, vector<IPair>, greater<IPair>> pq;

        long long prefix_sum = 0;

        for (int i = 0; i < n; i++)
        {
            prefix_sum += nums[i];

            // if it's a valid sub-array, calculated length
            if (prefix_sum >= k)
                // (i + 1) due to 0 based index
                res = min(res, i + 1);

            // now try removed some prefix to checked it's still a valid sub-array
            while (pq.size() && (prefix_sum - pq.top().first) >= k)
            {
                int ending_idx = pq.top().second;
                pq.pop();

                // calculate the results
                res = min(res, i - ending_idx);
            }

            // stored current prefix sum into heap
            pq.push({prefix_sum, i});
        }

        return res == INT_MAX ? -1 : res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1};

    cout << obj.shortestSubarray(arr, 1) << endl;

    return 0;
}