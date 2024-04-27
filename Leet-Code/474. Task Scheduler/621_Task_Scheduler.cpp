#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        int freq[26] = {0};
        priority_queue<int> pq;
        int ans = 0;

        // count each element frequency
        for (int i = 0; i < tasks.size(); i++)
        {
            freq[tasks[i] - 'A']++;
        }

        // now store the frequency into priority queue
        // this hold value as a descending order
        for (int i = 0; i < 26; i++)
        {
            if (freq[i])
                pq.push(freq[i]);
        }

        while (!pq.empty())
        {
            int cycle = n + 1;
            int taskCount = 0;

            vector<int> store;

            while (cycle-- && !pq.empty())
            {
                int value = pq.top();
                if (value > 1)
                {
                    // decrease it's frequency
                    store.push_back(value - 1);
                }
                pq.pop();
                taskCount++;
            }

            // Restore updated frequencies to the heap
            for (int x : store)
            {
                pq.push(x);
            }

            ans += (pq.empty() ? taskCount : n + 1);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B', 'C', 'C', 'C', 'D', 'D', 'E'};
    cout << obj.leastInterval(tasks, 2) << endl;
    return 0;
}