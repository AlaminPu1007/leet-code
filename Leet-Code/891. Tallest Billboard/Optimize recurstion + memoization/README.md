# 956. Tallest Billboard

This problem involved about, you are installing a billboard and want it to have the largest height. The billboard will have two steel supports, one on each side. Each steel support must be an equal height.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/tallest-billboard/description)

**Key Insights :**<br/>

1. `Difference Tracking`: Instead of tracking absolute heights, track the difference between the two billboards
2. `Offset Handling`: Uses a +5000 offset to handle negative differences in array indexing
3. `State Reduction`: Only needs to track current index and height difference, reducing state space
4. `Early Termination`: Returns INT_MIN for invalid states to prune impossible paths

**Algorithm Steps :**<br/>

1. `DP Initialization`:

    - Initialize a 2D DP array with -1 (`uncomputed` states)
    - Offset of 5000 added to handle negative differences

2. `Recursive DP Function`:

    - Base case: Return 0 if rods are exhausted and difference is 0
    - For each rod, consider three options:
        - Skip the rod
        - Add to the taller billboard
        - Add to the shorter billboard
    - Store and return maximum result for each state

3. `Result Calculation`:
    - The final result is half of the maximum sum (since both billboards are equal)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * s)` - where n is number of rods `(≤ 20)` and `a` is maximum sum difference `(≤ 5000)`
-   Space-Complexity: `O(n * s)` - for storing all possible states
