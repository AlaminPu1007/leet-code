#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        // we will get always larger value first
        priority_queue<int> pq;
        int n = nums.size();

        for (auto item : nums)
            pq.push(item);

        int i = 1;

        // put greater element at odd index
        while (i < n && pq.size())
        {
            nums[i] = pq.top();
            pq.pop();
            i += 2;
        }

        i = 0;
        // put smaller item at event index
        while (i < n && pq.size())
        {
            nums[i] = pq.top();
            pq.pop();
            i += 2;
        }
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 5, 1, 1, 6, 4};
    obj.wiggleSort(arr);
    return 0;
}