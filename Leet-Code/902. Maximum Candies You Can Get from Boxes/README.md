# 1298. Maximum Candies You Can Get from Boxes

This problem involved about, you have n boxes labeled from 0 to n - 1. You are given four arrays: status, candies, keys, and containedBoxes where:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-candies-you-can-get-from-boxes/)

**Key Insights :**<br/>

1. `Graph Representation`: Boxes form a graph where edges represent containment
2. `State Tracking`: Need to track which boxes we've found and which we can open
3. `Recursive Exploration`: Depth-first search to explore all accessible boxes

**Algorithm Steps :**<br/>

1. `Initialization`:

    - Track found but unopened boxes
    - Track visited boxes to avoid cycles
    - Start with initial boxes

2. `Box Processing`:

    - If box is open and unvisited:
        - Collect its candies
        - Explore its contained boxes
        - Use its keys to open found boxes
    - If box is closed:
        - Store it for later if we find a key

3. `Result Calculation`:
    - Sum candies from all accessible open boxes

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(V + E + K)` - where V is number of boxes and E is total contained boxes. where K is total keys (amortized constant per box).
-   Space-Complexity: `O(n)` - for visited, foundBox set.Recursion O(n) in worst case.
