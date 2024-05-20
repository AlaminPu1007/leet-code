#include <bits/stdc++.h>
using namespace std;

class MedianFinder
{
    // define a max heap
    priority_queue<int> left_max_heap;
    // define a min heap
    priority_queue<int, vector<int>, greater<int>> right_min_heap;

public:
    MedianFinder()
    {
    }

    void addNum(int num)
    {

        if (left_max_heap.empty() || left_max_heap.top() > num)
            left_max_heap.push(num);
        else
            right_min_heap.push(num);

        // we always track the left_max_heap size should be greater than 1 from right_min_heap size
        if (abs((int)left_max_heap.size() - (int)right_min_heap.size()) > 1)
        {
            // removed item from left_max_heap and push to right_min_heap
            right_min_heap.push(left_max_heap.top());
            left_max_heap.pop();
        }

        // if right_min_heap size is greater than left_max_heap
        // then we need to remove item from right_min_heap and push to left_max_heap
        if (left_max_heap.size() < right_min_heap.size())
        {
            left_max_heap.push(right_min_heap.top());
            right_min_heap.pop();
        }
    }

    double findMedian()
    {
        if (left_max_heap.size() == right_min_heap.size())
        {
            return (double)(left_max_heap.top() + right_min_heap.top()) / 2.0;
        }

        return left_max_heap.top();
    }
};
