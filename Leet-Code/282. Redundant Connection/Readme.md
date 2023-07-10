## 684. Redundant Connection

This Problem involved about, In this problem, a tree is an undirected graph that is connected and has no cycles.Return an edge that can be removed so that the resulting graph is a tree of n nodes. If there are multiple answers, return the answer that occurs last in the input.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/redundant-connection/description/)

**Approach :**<br/>

-   [Learn disjoint data-structure](https://github.com/AlaminPu1007/Data-structure-Algorithm/tree/master/DataStructure%20%26%20Algorithm/Graph/Disjoint%20Set%2C%20Union%20by%20Rank%20%2C%20Union%20by%20Size%2C%20%20Path%20Compression)

**Complexity Analysis :**<br/>

-   Time Complexity: `O(Nα(N))≈O(N)`, where N is the number of vertices (and also the number of edges) in the graph, and `α` is the Inverse-Ackermann function. We make up to N queries of dsu.union, which takes (amortized) `O(α(N))` time. Outside the scope of this article, it can be shown why dsu.union has `O(α(N))` complexity, what the Inverse-Ackermann function is, and why `O(α(N))` is approximately `O(1)`.
-   Space-Complexity: `O(n)` - The current construction of the graph (embedded in our dsu structure) has at most `n` nodes.

**References :**<br/>

-   [Learn better approach from leetcode official site](https://leetcode.com/problems/redundant-connection/editorial/)
