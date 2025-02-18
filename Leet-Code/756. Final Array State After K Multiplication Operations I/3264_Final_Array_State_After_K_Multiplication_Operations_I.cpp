#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int> &nums, int k, int multiplier) {
        int n = nums.size();
        vector<int> res(n, 0);

        // Min-heap using priority queue
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Insert elements with their indices into the priority queue
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        // Perform `k` operations
        while (k--) {
            int value = pq.top().first;
            int idx = pq.top().second;
            pq.pop();

            pq.push({value * multiplier, idx});
        }

        // Extract the final values into the result array
        while (!pq.empty()) {
            int value = pq.top().first;
            int idx = pq.top().second;
            pq.pop();

            res[idx] = value;
        }

        return res;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {2, 1, 3, 5, 6};
    int k = 5, multiplier = 2;

    vector<int> res = obj.getFinalState(arr, k, multiplier);

    for (auto item : res) {
        cout << item << " ";
    }
    return 0;
}
