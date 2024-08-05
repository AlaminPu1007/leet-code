# 502 IPO

This problem involved about, suppose LeetCode will start its IPO soon. In order to sell a good price of its shares to Venture Capital, LeetCode would like to work on some projects to increase its capital before the IPO. Since it has limited resources, it can only finish at most k distinct projects before the IPO. Help LeetCode design the best way to maximize its total capital after finishing at most k distinct projects. <br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/ipo/description/)

**Approach:**

1. Use two priority queues (heaps):

    - A min-heap to keep track of projects based on their capital requirements.
    - A max-heap to keep track of available projects based on their profits.

2. Populate the min-heap with pairs of (capital, profit).

3. Iterate up to `k` times to select projects:
    - Transfer all projects from the min-heap to the max-heap whose capital requirement is less than or equal to the current capital `w`.
    - If there are no projects in the max-heap, break the loop.
    - Otherwise, choose the project with the maximum profit from the max-heap, add its profit to the capital `w`, and remove it from the max-heap.

**Algorithm:**

1. **Initialization:**

    - Determine the number of projects `n`.
    - Define a min-heap `minCapita` to store pairs of (capital, profit).
    - Define a max-heap `maxProfit` to store profits of available projects.

2. **Populate Min-Heap:**

    - Insert each project as a pair of (capital, profit) into the min-heap.

3. **Select Projects:**

    - Iterate up to `k` times:
        - While the top project in the min-heap has a capital requirement less than or equal to `w`, transfer it to the max-heap.
        - If the max-heap is empty, break the loop.
        - Otherwise, add the top profit from the max-heap to `w` and remove it from the max-heap.

4. **Return Result:**
    - The variable `w` will contain the maximum capital after selecting up to `k` projects.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(k * log(n))` -
-   Space-Complexity: `O(n)` -
