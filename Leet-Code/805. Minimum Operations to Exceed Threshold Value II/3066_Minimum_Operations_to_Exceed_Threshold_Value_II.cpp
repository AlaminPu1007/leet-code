#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int n = nums.size();
        int res = 0;

        if (n <= 1)
            return res;

        // initialized a priority-queue or min-heap
        priority_queue<long, vector<long>, greater<>> pq(nums.begin(), nums.end());

        while (pq.size() && pq.top() < k)
        {
            long minElement = pq.top();
            // removed this item from queue
            pq.pop();

            long maxElement = pq.top();
            // removed this item from queue
            pq.pop();

            pq.push(minElement * 2 + maxElement);

            res++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 11, 10, 1, 3};

    cout << obj.minOperations(arr, 10) << endl;

    return 0;
}