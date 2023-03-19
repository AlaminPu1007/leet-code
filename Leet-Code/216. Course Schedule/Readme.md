## 207. Course Schedule -> Topological sort

[Visit Problem](https://leetcode.com/problems/course-schedule/description/)

**Approach :**<br/>

We will apply the BFS(Breadth First Search) traversal technique. Breadth First Search or BFS is a traversal technique where we visit the nodes level-wise, i.e., it visits the same level nodes simultaneously, and then moves to the next level.<br/>

-   The algorithm steps are as follows: <br/>

1. First, we will form the adjacency list of the graph using the pairs. For example, for the pair {u, v} we will add node v as an adjacent node of u in the list.

2. Then, we will calculate the in-degree of each node and store it in the indegree array. We can iterate through the given adj list, and simply for every node u->v, we can increase the indegree of v by 1 in the indegree array.

3. Initially, there will be always at least a single node whose indegree is 0. So, we will push the node(s) with indegree 0 into the queue.

4. Then, we will pop a node from the queue including the node in our answer array, and for all its adjacent nodes, we will decrease the indegree of that node by one. For example, if node u that has been popped out from the queue has an edge towards node v(u->v), we will decrease indegree[v] by 1.

5. After that, if for any node the indegree becomes 0, we will push that node again into the queue.

6. We will repeat steps 3 and 4 until the queue is completely empty. Now, completing the BFS we will get the linear ordering of the nodes in the answer array.

7. We will return the answer array if the length of the ordering equals the number of tasks. Otherwise, we will return an empty array.

**Complexity Analysis :**<br/>

-   Time Complexity: `O(V+E)`, where `V = no. of nodes and E = no. of edges`. This is a simple BFS algorithm.

-   Space Complexity: `O(N) + O(N) ~ O(2N), O(N)` for the indegree array, and `O(N)` for the queue data structure used in BFS(where `N = no.of nodes`). Extra `O(N)` for storing the topological sorting. `Total ~ O(3N)`.

**References :**<br/>

-   [From Article](https://takeuforward.org/data-structure/course-schedule-i-and-ii-pre-requisite-tasks-topological-sort-g-24/)
-   [From Video](https://www.youtube.com/watch?v=WAOfKpxYHR8&list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn&index=24)
