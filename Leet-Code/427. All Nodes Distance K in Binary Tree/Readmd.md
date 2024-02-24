## 863. All Nodes Distance K in Binary Tree

This problem involved about, given the root of a binary tree, the value of a target node target, and an integer k, return an array of the values of all nodes that have a distance k from the target node.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/)

**Approach :**<br/>

1. Initialization:

    - The `distanceK` function takes a root of a binary tree, a target node, and an integer `k`.
    - It returns a vector containing all nodes that are exactly `k` distance away from the target node.

2. Parent Node Mapping:

    - Use the `makeParents` function to create a mapping of each node to its parent node.
    - Traverse the binary tree using a BFS approach to assign parents to each node.

3. BFS Traversal:

    - Perform a BFS traversal starting from the target node.
    - Enqueue the target node into a queue and mark it as visited.

4. Level-Based Traversal:

    - For each level, enqueue the left child, right child, and parent of the current node (if they exist and have not been visited).
    - Continue this process until reaching the desired level `k`.

5. Result Collection:

    - After completing the BFS traversal up to level `k`, collect the nodes present in the queue.
    - These nodes are exactly at a distance of `k` from the target node.

6. Result:
    - The function returns a vector containing the values of nodes at distance `k` from the target node.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2N + log N )` - The time complexity arises from traversing the tree to create the parent hashmap, which involves visiting every node once hence O(N), exploring all nodes at a distance of ‘K’ which will be O(N) in the worst case, and the logarithmic lookup time for the hashmap is O( log N) in the worst scenario as well hence O(N + N + log N) which simplified to O(N).
-   Space-Complexity: `O(n)` - The space complexity stems from the data structures used, O(N) for the parent hashmap, O(N) for the queue of DFS, and O(N) for the visited hashmap hence overall our space complexity is `O(3N) ~ O(N)`.
