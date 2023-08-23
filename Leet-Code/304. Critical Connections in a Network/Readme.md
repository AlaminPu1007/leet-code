## 1192. Critical Connections in a Network (Using Tarjan’s Algorithm of time in and low time)

This problem involved about, There are n servers numbered from `0 to n - 1` connected by undirected server-to-server connections forming a network where `connections[i] = [ai, bi]` represents a connection between servers ai and bi. Any server can reach other servers directly or indirectly through the network.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/critical-connections-in-a-network/description/)

**Approach :**<br/>

-   First, we need to create the adjacency list for the given graph from the edge information(If not already given). And we will declare a variable timer(either globally or we can carry it while calling DFS), that will keep track of the time of insertion for each node.

-   Then we will start DFS from node 0(assuming the graph contains a single component otherwise, we will call DFS for every component) with parent -1.

    1. Inside DFS, we will first mark the node visited and then store the time of insertion and the lowest time of insertion properly. The timer may be initialized to 0 or 1.

    2. Now, it’s time to visit the adjacent nodes

    3. If the adjacent node is the parent itself, we will just continue to the next node.

    4. If the adjacent node is not visited, we will call DFS for the adjacent node with the current node as the parent. After the DFS gets completed, we will compare the lowest time of insertion of the current node and the adjacent node and take the minimum one. Now, we will check if the lowest time of insertion of the adjacent node is greater than the time of insertion of the current node. If it is, then we will store the adjacent node and the current node in our answer array as they are representing the bridge.

    5. If the adjacent node is already visited, we will just compare the lowest time of insertion of the current node and the adjacent node and take the minimum one.

-   Finally, our answer array will store all the bridges.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(V+2E)`, where V = no. of vertices, E = no. of edges. It is because the algorithm is just a simple DFS traversal.
-   Space-Complexity: `O(V+2E) + O(3V)`, where V = no. of vertices, E = no. of edges. O(V+2E) to store the graph in an adjacency list and O(3V) for the three arrays i.e. tin, low, and vis, each of size V.

**References :**<br/>

-   [From Article](https://takeuforward.org/graph/bridges-in-graph-using-tarjans-algorithm-of-time-in-and-low-time-g-55/)
-   [From video](https://www.youtube.com/watch?v=qrAub5z8FeA&list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn&index=57)
