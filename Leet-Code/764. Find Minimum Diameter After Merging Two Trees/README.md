# 3203. Find Minimum Diameter After Merging Two Trees

This problem involved about, there exist two undirected trees with n and m nodes, numbered from 0 to n - 1 and from 0 to m - 1, respectively. You are given two 2D integer arrays edges1 and edges2 of lengths n - 1 and m - 1, respectively, where edges1[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the first tree and edges2[i] = [ui, vi] indicates that there is an edge between nodes ui and vi in the second tree.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-minimum-diameter-after-merging-two-trees/description/)

**Approach :**<br/>

1. `Input Parsing`:

    - Use the given edges of the two trees to build adjacency lists for both trees.

2. `Find Diameter for Each Tree`:

    - Use a recursive DFS function to calculate the diameter of each tree:
        - Track the two longest depths from each node.
        - Update the diameter as the sum of these two depths.

3. `Merge Trees`:

    - Compute the diameter of the merged tree as:
      -This considers the longest path spanning both trees via their respective central nodes.

4. `Return Result`:
    - The minimum diameter is the maximum of:
        - `diameter1`
        - `diameter2`
        - `mergedDiameter`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - are the number of edges in `edges1` and `edges2`, respectively.
-   Space-Complexity: `O(n + m) + O(n)` - Adjacency List Storage, `O(n)` for dfs call stacks.
