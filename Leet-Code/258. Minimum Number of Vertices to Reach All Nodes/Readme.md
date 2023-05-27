## 1557. Minimum Number of Vertices to Reach All Nodes

-   [Check out the problem](https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/description/)

**Approach :**<br/>

-   Create a boolean list isIncomingEdgeExists of length NNN which store true if there is an incoming edge to it, false otherwise. Initialize it with every entry as false
-   Iterate over edges, and for every edge, mark the second vertex as true in the list isIncomingEdgeExists.
-   Iterate over the list isIncomingEdgeExists and include all the vertices that have a false value in the final answer list requiredNodes
-   Return `requiredNodes`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N+E)`
-   Space-Complexity: `O(n)`
