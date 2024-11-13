# 2583. Kth Largest Sum in a Binary Tree

This problem involved about, you are given the root of a binary tree and a positive integer k.
The level sum in the tree is the sum of the values of the nodes that are on the same level.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/)

**Approach :**<br/>

#### Breadth-First Search (BFS)

We use a BFS approach to traverse the tree level by level. For each level, we compute the sum of the nodes' values and store these sums in a `max heap` (implemented using `priority_queue`).

Once we have computed the sums of all levels, we extract the top `k` largest sums from the max heap, and the `kth` extracted value is the result.

#### Key Points

1. `BFS Traversal`:

    - Use a queue to traverse the tree level by level.
    - At each level, compute the sum of node values and push it into the max heap.

2. `Max Heap`:

    - The `priority_queue` is used to store the level sums. This allows us to easily extract the largest sums.

3. `Extracting Kth Largest Sum`:
    - Pop the top element from the heap `k` times to get the `kth` largest sum.
    - If there are fewer than `k` levels, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - , where `n` is the number of nodes in the tree and inserting sums into the priority queue takes `O(n * log(n))` time.
-   Space-Complexity: `O(n)` - where `n` is the number of nodes. We use space for the queue in the BFS and the priority queue to store the sums.