#include <bits/stdc++.h>
using namespace std;

class Solution
{
    typedef pair<int, pair<int, int>> IPair; // {minValue, {listIndex(row), itemIndex(col)}}

public:
    vector<int> smallestRange(vector<vector<int>> &nums)
    {
        // define a minHeap
        priority_queue<IPair, vector<IPair>, greater<IPair>> pq;

        int maxVal = INT_MIN, rangeStart = 0, rangeEnd = INT_MAX;

        int n = nums.size();
        // put k element into priority queue
        for (int i = 0; i < n; i++)
        {
            int value = nums[i][0];

            // put into priority queue
            // we take all list first item
            pq.push({value, {i, 0}});

            // keep track of first max-element from k value
            maxVal = max(maxVal, value);
        }

        // if heap size is not similar with list size, then there must be possible to one or more list
        // is out of bound
        while (pq.size() == n)
        {
            // destruct first value from minHeap
            auto [minVal, indices] = pq.top();
            pq.pop();

            int row = indices.first, col = indices.second;

            // calculate range, we need always min-range as much as possible
            // Update the smallest range
            if (maxVal - minVal < rangeEnd - rangeStart)
            {
                rangeEnd = maxVal;
                rangeStart = minVal;
            }

            // If possible, add the next element from the same row to the heap
            // also keep track this is could be possible to maxValue
            if (col + 1 < nums[row].size())
            {
                int nextValue = nums[row][col + 1];
                pq.push({nextValue, {row, col + 1}});

                // keep track of maxValue
                maxVal = max(maxVal, nextValue);
            }
        }

        return {rangeEnd, rangeStart};
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{4, 10, 15, 24, 26}, {0, 9, 12, 20}, {5, 18, 22, 30}};
    vector<int> res = obj.smallestRange(arr);
    cout << res[0] << " " << res[1];
    return 0;
}