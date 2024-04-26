## 1305. All Elements in Two Binary Search Trees

This problem involved about,

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/)

**Approach :**<br/>

1. Implement a Depth-First Search (DFS) function to traverse each tree and collect all node values.
2. Combine the node values from both trees into a single vector.
3. Sort the combined vector to get all elements in ascending order.
4. Return the sorted vector as the result.

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n * log(n))` - Sorting the combined vector of size N1 + N2 takes `O((N1 + N2)log(N1 + N2))` time.

-   Space-Complexity:`O(n)` - The space complexity is linear with respect to the total number of nodes in both trees since all node values are stored in the result vector.
