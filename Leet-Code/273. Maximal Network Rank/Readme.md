## 1615. Maximal Network Rank

This problem involved about, given the integer n and the array roads, return the maximal network rank of the entire infrastructure.

# Problem description

For better problem description, please visit [LeetCode page](https://leetcode.com/problems/maximal-network-rank/description/)

**Approach :**<br/>

-   Learn approach from [Leet-code](https://leetcode.com/problems/maximal-network-rank/editorial/)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E + V^2)` - We iterate on each edge and store both its nodes in the set which will take O(1) time. Thus, for `E` edges, it will take us `O(E)` time. Then we iterate on all possible pairs of the nodes and calculate the network rank which will take `O(1)` time. Thus, `for V(V−1)/2` pairs, it will take `O(V^2)`.

-   Space-Complexity: `O(E)` - We use a set that stores all the edge's nodes in it which will take `O(E)` space in a fully connected graph.
