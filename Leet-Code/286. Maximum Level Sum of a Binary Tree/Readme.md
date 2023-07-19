## 1161. Maximum Level Sum of a Binary Tree

This problem involved about, given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.
Return the smallest level x such that the sum of all the values of nodes at level x is maximal.

# Problem description

For better explanation, please visit [LeetCode Page](https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/)

**Algorithm BFS(Breadth-First-Search):**<br/>

1. Create an integer variable maxSum to keep track of the maximum sum of node values at any level. We start with a large negative value
2. Create another variable ans to store the answer to the problem.
3. Create another integer variable level to store the current level through which we are iterating. We initialize it with 0
4. Initialize a queue q of TreeNode and push root into it.
5. Perform a BFS traversal until the queue is empty
    - Increment level by 1 and initialize sumAtCurrentLevel = 0 to compute the sum of all values of nodes at this level
    - Iterate through all the nodes at level using only the q.size() number of nodes. Within this inner loop, pop out all the nodes at the current level one by one, adding their values to sumAtCurrentLevel and pushing the left and right children (if they exist) into the queue
    - Realize that after traversing all of the nodes at level, the queue only has nodes at level + 1
    - After traversing through all the nodes at level, we check if sumAtCurrentLevel is greater than maxSum. If maxSum < sumAtCurrentLevel, update our answer variable to ans = level and set maxSum = sumAtCurrentLevel
6. return ans

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
    -   Each queue operation in the BFS algorithm takes `O(1)` time, and a single node can only be pushed once, leading to `O(n)` operations for nnn nodes.
    -   The computation of sum of all the values of nodes at a level also takes `O(n)` time as each node's value is used once
-   Space-Complexity: `O(n)` - BFS queue will have `(n+1)/2=O(n)` elements in the worst-case scenario

**References :**<br/>

-   For Better Approach, please visit [LeetCode Official Solution](https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/editorial/)
