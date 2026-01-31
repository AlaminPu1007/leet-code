# 3650. Minimum Cost Path with Edge Reversals

This problem involved about, you are given a directed, weighted graph with n nodes labeled from 0 to n - 1, and an array edges where edges[i] = [ui, vi, wi] represents a directed edge from node ui to node vi with cost wi.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-cost-path-with-edge-reversals/description/)

**Approach :**<br/>
We can solve this using **Dijkstra's algorithm**:

1. `Build adjacency list`:

    - For each edge `(u, v, w)`:
        - Add `(v, w)` to `u`’s adjacency list
        - Add `(u, 2*w)` to `v`’s adjacency list (as per problem requirement)

2. `Initialize distance array`:

    - `dis[i]` = minimum cost to reach node `i`
    - Set all distances to `INT_MAX` except the starting node `0` (`dis[0] = 0`)

3. `Use min-priority queue`:

    - Queue stores `(distance, node)`
    - Always expand the node with the `smallest distance`

4. `Relax edges`:

    - For each neighbor `(v, w)` of current node `u`:
        ```
        if dis[v] > dis[u] + w:
            dis[v] = dis[u] + w
            push (dis[v], v) into priority queue
        ```

5. `Skip stale entries`:

    - If `d != dis[u]`, ignore the entry (it’s an outdated distance)

6. `Terminate`:
    - If the destination `n-1` is reached, return the distance
    - If queue is empty and destination not reached, return `-1`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(e * log(v))` - Each edge is relaxed at most once; each operation in the priority queue is `O(log(v))`
-   Space-Complexity: `O(v + e)` - Adjacency list + distance array + priority queue
