## 2492. Minimum Score of a Path Between Two Cities

[Visit Problem](https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/description/)

**Approach Using BFS Algorithm:**<br/>

-   make an adjacency list from roads array, `adj` will hold first value as a `node` and last value as a `weight/distance`
-   Push source node into queue data-structure, as well as mark it's visited
-   get node from `q.front()` and traverse through it's `adjacency-list` and compare it's weight with previous weight by `min` method(c++ predefined library)
-   return `min_value(weight)`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(E + V)`
-   Space-Complexity: `O(E + V)`

Note: DFS has same complexity<br/>
