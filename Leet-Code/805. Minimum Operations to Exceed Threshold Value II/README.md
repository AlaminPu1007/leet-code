# 3066. Minimum Operations to Exceed Threshold Value II

This problem involved about, You are given a 0-indexed integer array `nums`, and an integer `k`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/)

**Approach :**<br/>

1. `Use a Min-Heap (Priority Queue)`:

    - A `priority queue` (min-heap) efficiently gives the smallest elements.
    - Insert all elements into the `min-heap`.

2. `Greedily Combine Smallest Elements`:

    - While the smallest element in the heap is `less than `k``:
        - Extract the two smallest elements.
        - Compute the new element as `minElement * 2 + maxElement`.
        - Push the new element back into the heap.
        - Increase the operation count.

3. `Edge Case`:
    - If `nums.size() ≤ 1`, return `0` since no operations are needed.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Each heap operation (push & pop) takes `O(log(n))`. In the worst case, we perform n operations, leading to `O(n * log(n))`.

-   Space-Complexity: `O(n)` - for the priority queue
