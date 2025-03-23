#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> lexicographicallySmallestArray(vector<int> &nums, int limit)
    {
        int n = nums.size();
        // will be hold group of difference number
        vector<deque<int>> dq;
        // create a map to keep track of the group index
        unordered_map<int, int> numsGroup;
        vector<int> sortedArr(nums.begin(), nums.end());
        // sort the array
        sort(sortedArr.begin(), sortedArr.end());

        // create a group
        for (auto item : sortedArr)
        {
            // if any group is not present associated with the limit
            if (dq.empty() || abs(item - dq.back().back()) > limit)
            {
                // insert an empty deq
                dq.push_back(deque<int>());
            }

            // insert numbers into last group of the deq
            dq.back().push_back(item);

            // Map the number to its group index
            numsGroup[item] = dq.size() - 1; // Use zero-based indexing
        }

        vector<int> res;

        // build an resultant array
        for (int i = 0; i < n; i++)
        {
            int item = nums[i];

            // get group index
            int group_idx = numsGroup[item];

            //
            res.push_back(dq[group_idx].front());

            // removed from deq
            dq[group_idx].pop_front();
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 5, 3, 9, 8};

    vector<int> res = obj.lexicographicallySmallestArray(arr, 2);

    for (auto item : res)
        cout << item << " ";

    return 0;
}