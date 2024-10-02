# 947. Most Stones Removed with Same Row or Column

This problem involved about, on a 2D plane, we place n stones at some integer coordinate points. Each coordinate point may have at most one stone.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/description/)

**Approach :**<br/>

1. `Identify the Grid Size`:

    - Determine the maximum row and column indices in the `stones` list to set the bounds for our DSU.

2. `Initialize DSU`:

    - Create a DSU object with a size sufficient to handle all possible row and column connections. The total size will be `maxRow + maxCol + 1`.

3. `Union Operations`:

    - For each stone at position `(x, y)`, connect the corresponding row node (`x`) and column node (`y + maxRow + 1`) using union by rank. This ensures that any stone sharing the same row or column is connected in the same set.

4. `Count Disjoint Sets`:
    - Use the `findUltimateParent` method to identify unique connected components (i.e., ultimate parents). Each unique parent represents a separate island.
    - The number of removable stones is equal to the total number of stones minus the number of connected components.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * α(n))` - The findUltimateParent and unionByRank operations both run in nearly constant time, `O(α(n))`, where `α` is the inverse Ackermann function. Since we perform these operations for each stone, the total time complexity is `O(n * α(n))`.

-   Space-Complexity: `O(n)` - due to the storage required for the parent, rank, and uniqueNode data structures.