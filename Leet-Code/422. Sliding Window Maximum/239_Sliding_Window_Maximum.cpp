#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> res;
        int n = nums.size();

        // doubly linked list
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {

            // remove out of boundary element from dequeue
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            // removed lesser element from dequeue
            while (!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);

            if (i >= k - 1)
                res.push_back(nums[dq.front()]);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 2, 4};
    vector<int> res = obj.maxSlidingWindow(arr, 2);

    for (auto item : res)
        cout << item << " ";

    return 0;
}