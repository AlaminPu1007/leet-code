# 2392. Build a Matrix With Conditions

This problem involved about, You are given a positive integer k. You are also given:

-   a 2D integer array rowConditions of size `n where rowConditions[i] = [abovei, belowi]`, and
-   a 2D integer array colConditions of size `m where colConditions[i] = [lefti, righti]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/build-a-matrix-with-conditions/description)

**Approach :**<br/>

1. **Topological Sort**:

    - Perform a topological sort on `rowConditions` to determine the order of elements in the rows.
    - Perform a topological sort on `colConditions` to determine the order of elements in the columns.

2. **Handle Invalid Case**:

    - If either topological sort returns an empty result (indicating a cycle), return an empty matrix.

3. **Construct the Matrix**:

    - Create a `k x k` matrix initialized with 0.
    - For each element, place it in the position determined by the row and column orders obtained from the topological sorts.

**Complexity Analysis :**<br/>

-   Time-Complexity: `(V + E)` + `O(K^2)` - Topological sort required `O(V + E)` time complexity and the matrix of `k` (elements) is `O(K ^ 2)`.

-   Space-Complexity: `(V)` + `O(K ^ 2)` - `V` is the number of nodes and `(K ^ 2)` is the resultant matrix.

**References :**<br/>

-   [Learn more about Topological sort](<https://github.com/AlaminPu1007/Data-structure-Algorithm/tree/master/DataStructure%20%26%20Algorithm/Graph/Topological%20Sorting/Kahn’s%20Algorithm%20(BFS)>)