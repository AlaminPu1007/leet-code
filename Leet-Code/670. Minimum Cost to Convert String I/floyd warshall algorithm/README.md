# 2976. Minimum Cost to Convert String I

This problem involved about, you are given two 0-indexed strings source and target, both of length n and consisting of lowercase English letters. You are also given two 0-indexed character arrays original and changed, and an integer array cost, where cost[i] represents the cost of changing the character original[i] to the character changed[i].

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-cost-to-convert-string-i/description)

**Approach :**<br/>

1. **Initialization**:

    - Initialize a 26x26 matrix `adjMatrix` with `INT_MAX`.
    - For each character change from `original` to `changed` with a given `cost`, update the adjacency matrix.

2. **Self-Node Cost**:

    - Set `adjMatrix[i][i]` to 0 for all `i` from 0 to 25.

3. **Floyd-Warshall Algorithm**:

    - For each intermediate node `k`, update the cost for each pair of nodes `(i, j)` using the formula:
      \[
      \text{adjMatrix}[i][j] = \min(\text{adjMatrix}[i][j], \text{adjMatrix}[i][k] + \text{adjMatrix}[k][j])
      \]

4. **Transformation Cost Calculation**:
    - Initialize the result `res` to 0.
    - For each character in the source string, check if it matches the target string.
    - If not, add the minimum cost from `adjMatrix` to the result.
    - If any transformation is not possible, return -1.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`- Iterate over the `original` or `source` can have required `O(n)` time, Other are constant.

-   Time-Complexity: `O(1)`- distances matrix of 26\*26 which is constant.
