## 1743. Restore the Array From Adjacent Pairs

This problem involved about, There is an integer array nums that consists of n unique elements, but you have forgotten it. However, you do remember every pair of adjacent elements in nums.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/restore-the-array-from-adjacent-pairs/description)

**Approach :**<br/>

1. Initialize a graph, where graph[node] holds a list of neighbors for node
2. Iterate over each edge (x, y) in adjacentPairs:
    - Add x to graph[y]
    - Add y to graph[x]
3. Iterate over each num in graph:
    - If the length of graph[num] is equal to 1, set root = num and break from the loop.
4. Define a function `DFS(node, prev, ans)`
    - Add node to ans
    - Iterate over each neighbor in graph[node] and If neighbor != prev then called again DFS method
5. Initialize the answer list ans
6. Call dfs(root, k, ans), where k can be any value that is guaranteed to not appear in the graph, such as infinity.
7. return ans

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n) => O(n)` - We first build graph, which involves iterating over `O(n)` edges. Next, we find root, which may cost `O(n)` iterations. Finally, we perform a DFS.

-   Space-Complexity: `O(n) + O(n) => O(n)` - we are using an additional `hash-map` to store adjacency list, put answer also has `O(n)` space complexity
