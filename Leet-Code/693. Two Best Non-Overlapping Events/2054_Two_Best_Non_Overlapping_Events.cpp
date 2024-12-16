#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, int> IPair;

public:
    int maxTwoEvents(vector<vector<int>> &events)
    {
        priority_queue<IPair, vector<IPair>, greater<IPair>> pq;

        int res = 0, maxValueSeen = 0;

        // sort the event to detect overlap
        sort(events.begin(), events.end());

        for (auto item : events)
        {
            int start = item[0];
            int end = item[1];
            int value = item[2];

            // find the maximum value from previous events
            while (pq.size() && pq.top().first < start)
            {
                maxValueSeen = max(maxValueSeen, pq.top().second);
                pq.pop();
            }

            pq.push({end, value});
            res = max(res, value + maxValueSeen);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> events = {{1, 3, 2}, {4, 5, 2}, {2, 4, 3}};
    cout << obj.maxTwoEvents(events) << endl;
    return 0;
}