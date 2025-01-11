#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, int> IPair;

public:
    int smallestChair(vector<vector<int>> &times, int targetFriend)
    {
        int n = times.size();

        // define minHeap
        priority_queue<IPair, vector<IPair>, greater<IPair>> used_chairs; // {leavingTime, index}
        priority_queue<int, vector<int>, greater<int>> available_chairs;  // index

        // before sort the array, push index at last to keep trap of their actual index
        // it's not good to direct override the actual input array
        for (int i = 0; i < n; i++)
        {
            times[i].push_back(i);
            available_chairs.push(i);
        }

        // sort the array according to their start time
        sort(times.begin(), times.end());

        for (auto item : times)
        {
            int startTime = item[0];
            int endTime = item[1];
            int friend_idx = item[2];

            // based the current start time, it's possible to already used_chairs are release
            // according to their ending time
            while (used_chairs.size() && used_chairs.top().first <= startTime)
            {
                available_chairs.push(used_chairs.top().second);
                used_chairs.pop();
            }

            // assign the next available chair
            int chair = available_chairs.top();
            available_chairs.pop();

            // store the chair as a used chair
            used_chairs.push({endTime, chair});

            if (friend_idx == targetFriend)
                return chair;
        }

        return -1;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 4}, {2, 3}, {4, 6}};
    cout << obj.smallestChair(arr, 1) << endl;
    return 0;
}