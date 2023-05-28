#include <bits/stdc++.h>
using namespace std;

class KthLargest
{
public:
    int K = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    KthLargest(int k, vector<int> &nums)
    {
        K = k;
        for (auto item : nums)
            add(item);
    }

    int add(int val)
    {
        if (pq.size() < K)
            pq.push(val);
        else if (val > pq.top())
        {
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

int main(void)
{
    vector<int> arr = {4, 5, 8, 2};
    KthLargest obj(3, arr);
    return 0;
}