# 827. Making A Large Island

This problem involved about, you are given an n x n binary matrix grid. You are allowed to change at most one 0 to be 1.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/making-a-large-island/description)

**Approach :**<br/>

### Step 1: Identify and Label Islands

1. Traverse the grid and find all islands (`1`s).
2. Assign a `unique label` (starting from `2`) to each island.
3. Use `DFS` to calculate the size of each island and store the result in a `hash map` (`Size[label]`).

### Step 2: Find the Largest Island by Flipping a `0`

1. Iterate over all `0`s in the grid.
2. For each `0`, check its `4 adjacent cells`.
3. `Sum up the sizes` of unique adjacent islands.
4. The result is `1 + sum of unique island sizes` (flipping the `0` itself to `1`).
5. Keep track of the `maximum possible island size`.

### Step 3: Edge Case - No `0`s in the Grid

-   If the grid already consists entirely of `1`s, return `n * n` as the largest possible island.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - Each cell is visited once during DFS.
-   Space-Complexity: `O(n ^ 2)` - Visited Matrix & Hash Map.
